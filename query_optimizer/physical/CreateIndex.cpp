/**
 *   Copyright 2011-2015 Quickstep Technologies LLC.
 *   Copyright 2016 Pivotal Software, Inc.
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       https://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 **/

#include "query_optimizer/physical/CreateIndex.hpp"

#include <string>
#include <vector>

#include "query_optimizer/OptimizerTree.hpp"
#include "utility/Cast.hpp"
#include "utility/Macros.hpp"

namespace quickstep {
namespace optimizer {
namespace physical {

void CreateIndex::getFieldStringItems(
    std::vector<std::string> *inline_field_names,
    std::vector<std::string> *inline_field_values,
    std::vector<std::string> *non_container_child_field_names,
    std::vector<OptimizerTreeBaseNodePtr> *non_container_child_fields,
    std::vector<std::string> *container_child_field_names,
    std::vector<std::vector<OptimizerTreeBaseNodePtr>> *container_child_fields) const {
  inline_field_names->push_back("index_name");
  inline_field_values->push_back(index_name_);

  non_container_child_field_names->push_back("relation");
  non_container_child_fields->push_back(input_);

  container_child_field_names->push_back("index_attributes");
  container_child_fields->push_back(CastSharedPtrVector<OptimizerTreeBase>(index_attributes_));

  inline_field_names->push_back("serialized_index_description");
  inline_field_values->push_back(index_description_->DebugString());
}

}  // namespace physical
}  // namespace optimizer
}  // namespace quickstep
