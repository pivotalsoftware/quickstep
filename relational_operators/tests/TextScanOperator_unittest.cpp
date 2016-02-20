/**
 *   Copyright 2015 Pivotal Software, Inc.
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 **/

#include <cstddef>
#include <cstdio>
#include <memory>
#include <string>

#include "catalog/CatalogAttribute.hpp"
#include "catalog/CatalogDatabase.hpp"
#include "catalog/CatalogRelation.hpp"
#include "catalog/CatalogTypedefs.hpp"
#include "cli/PrintToScreen.hpp"
#include "query_execution/QueryContext.hpp"
#include "query_execution/QueryContext.pb.h"
#include "query_execution/WorkOrdersContainer.hpp"
#include "relational_operators/RelationalOperator.hpp"
#include "relational_operators/TextScanOperator.hpp"
#include "relational_operators/WorkOrder.hpp"
#include "relational_operators/WorkOrder.pb.h"
#include "relational_operators/WorkOrderFactory.hpp"
#include "storage/InsertDestination.pb.h"
#include "storage/StorageManager.hpp"
#include "types/TypeFactory.hpp"
#include "types/TypeID.hpp"
#include "utility/MemStream.hpp"

#include "glog/logging.h"

#include "gtest/gtest.h"

#include "tmb/id_typedefs.h"

using std::unique_ptr;

// Global variables used by test, set up by main().
namespace {
const char *input_filename;
const char *golden_output_filename;
const char *failure_output_filename;
}  // namespace

namespace quickstep {

namespace {
constexpr int kOpIndex = 0;
}  // namespace

class TextScanOperatorTest : public ::testing::Test {
 protected:
  virtual void SetUp() {
    db_.reset(new CatalogDatabase(nullptr, "database"));

    // Create table with a variety of attribute types.
    relation_ = new CatalogRelation(nullptr, "test_relation");
    db_->addRelation(relation_);

    relation_->addAttribute(
        new CatalogAttribute(relation_, "long_attr", TypeFactory::GetType(kLong, true)));
    relation_->addAttribute(
        new CatalogAttribute(relation_, "double_attr", TypeFactory::GetType(kDouble, true)));
    relation_->addAttribute(
        new CatalogAttribute(relation_, "char_attr", TypeFactory::GetType(kChar, 20, true)));
    relation_->addAttribute(
        new CatalogAttribute(relation_, "datetime_attr", TypeFactory::GetType(kDatetime, true)));
    relation_->addAttribute(
        new CatalogAttribute(relation_, "interval_attr", TypeFactory::GetType(kDatetimeInterval, true)));
    relation_->addAttribute(
        new CatalogAttribute(relation_, "varchar_attr", TypeFactory::GetType(kVarChar, 20, true)));

    storage_manager_.reset(new StorageManager("./test_data/"));
  }

  void fetchAndExecuteWorkOrders(RelationalOperator *op) {
    // Treat the single operator as the sole node in a query plan DAG.
    op->setOperatorIndex(kOpIndex);
    WorkOrdersContainer container(1, 0);
    const std::size_t op_index = 0;
    op->informAllBlockingDependenciesMet();
    op->getAllWorkOrders(&container);

    while (container.hasNormalWorkOrder(op_index)) {
      unique_ptr<serialization::WorkOrder> work_order_proto(container.getNormalWorkOrder(op_index));
      unique_ptr<WorkOrder> work_order(
          WorkOrderFactory::ReconstructFromProto(*work_order_proto,
                                                 tmb::kClientIdNone /* foreman_client_id */,
                                                 db_.get(),
                                                 query_context_.get(),
                                                 storage_manager_.get(),
                                                 nullptr /* TMB */));
      work_order->execute();
    }

    while (container.hasRebuildWorkOrder(op_index)) {
      unique_ptr<serialization::WorkOrder> work_order_proto(container.getRebuildWorkOrder(op_index));
      unique_ptr<WorkOrder> work_order(
          WorkOrderFactory::ReconstructFromProto(*work_order_proto,
                                                 tmb::kClientIdNone /* foreman_client_id */,
                                                 db_.get(),
                                                 query_context_.get(),
                                                 storage_manager_.get(),
                                                 nullptr /* TMB */));
      work_order->execute();
    }
  }

  static std::string LoadGoldenOutput() {
    std::string golden_string;

    FILE *golden_file = std::fopen(golden_output_filename, "r");
    CHECK_NOTNULL(golden_file);

    char read_buffer[1024];
    for (;;) {
      std::size_t bytes_read = std::fread(read_buffer, 1, 1024, golden_file);
      if (bytes_read == 0) {
        break;
      }
      golden_string.append(read_buffer, bytes_read);
    }

    CHECK(std::feof(golden_file));
    std::fclose(golden_file);

    return golden_string;
  }

  std::unique_ptr<CatalogDatabase> db_;
  CatalogRelation *relation_;
  std::unique_ptr<StorageManager> storage_manager_;
  std::unique_ptr<QueryContext> query_context_;
};

TEST_F(TextScanOperatorTest, ScanTest) {
  std::string golden_string = LoadGoldenOutput();

  // Setup the InsertDestination proto in the query context proto.
  serialization::QueryContext query_context_proto;

  QueryContext::insert_destination_id output_destination_index = query_context_proto.insert_destinations_size();
  serialization::InsertDestination *output_destination_proto = query_context_proto.add_insert_destinations();

  output_destination_proto->set_insert_destination_type(serialization::InsertDestinationType::BLOCK_POOL);
  output_destination_proto->set_relation_id(relation_->getID());
  output_destination_proto->set_need_to_add_blocks_from_relation(false);
  output_destination_proto->set_relational_op_index(kOpIndex);

  std::unique_ptr<TextScanOperator> text_scan_op(
      new TextScanOperator(input_filename,
                           '\t',
                           true,
                           false,
                           *relation_,
                           output_destination_index));

  // Setup query_context_.
  query_context_.reset(new QueryContext(query_context_proto,
                                        tmb::kClientIdNone,
                                        db_.get(),
                                        storage_manager_.get(),
                                        nullptr /* TMB */));

  fetchAndExecuteWorkOrders(text_scan_op.get());
  text_scan_op.reset(nullptr);

  MemStream print_stream;
  PrintToScreen::PrintRelation(*relation_,
                               storage_manager_.get(),
                               print_stream.file());
  std::string printed(print_stream.str());

  EXPECT_EQ(golden_string, printed);
  if (golden_string != printed) {
    FILE *failure_output = std::fopen(failure_output_filename, "w");
    CHECK_NOTNULL(failure_output);
    const std::size_t written
        = std::fwrite(printed.c_str(), 1, printed.length(), failure_output);
    CHECK_EQ(printed.length(), written);
    std::fclose(failure_output);
  }
}

}  // namespace quickstep

int main(int argc, char* argv[]) {
  google::InitGoogleLogging(argv[0]);
  testing::InitGoogleTest(&argc, argv);

  if (argc != 4) {
    std::fprintf(stderr,
                 "USAGE: %s [gtest options] "
                     "INPUT_FILENAME GOLDEN_OUTPUT_FILENAME FAILURE_OUTPUT_FILENAME\n",
                 argv[0]);
    return 1;
  }

  input_filename = argv[1];
  golden_output_filename = argv[2];
  failure_output_filename = argv[3];

  return RUN_ALL_TESTS();
}
