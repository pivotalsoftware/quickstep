#include "transaction/TransactionTable.hpp"

#include "transaction/AccessMode.hpp"
#include "transaction/ResourceId.hpp"
#include "transaction/Transaction.hpp"

#include "gtest/gtest.h"

namespace quickstep {
namespace transaction {

class TransactionTableTest : public ::testing::Test {
 protected:
  TransactionTableTest()
      : tid_1_(1),
        tid_2_(2),
        tid_3_(3) {
    }

  TransactionTable transaction_table_;
  const transaction_id tid_1_;
  const transaction_id tid_2_;
  const transaction_id tid_3_;
};

TEST_F(TransactionTableTest, NormalOperations) {
  EXPECT_EQ(transaction_table_.putOwnEntry(tid_1_,
                                           ResourceId(3),
                                           AccessMode(AccessModeType::kIsLock)),
            TransactionTableResult::kPlacedInOwned);

  EXPECT_EQ(transaction_table_.putPendingEntry(tid_1_,
                                               ResourceId(5),
                                               AccessMode(AccessModeType::kXLock)),
            TransactionTableResult::kPlacedInPending);
}

TEST_F(TransactionTableTest, DeleteEntryOperations) {
  EXPECT_EQ(transaction_table_.deleteOwnEntry(tid_2_,
                                              ResourceId(5),
                                              AccessMode(AccessModeType::kSLock)),
            TransactionTableResult::kDelError);

  EXPECT_EQ(transaction_table_.putOwnEntry(tid_2_,
                                           ResourceId(5),
                                           AccessMode(AccessModeType::kSLock)),
            TransactionTableResult::kPlacedInOwned);

  // Tring to delete a lock with different acces mode on same resource id
  // will result in an error.
  EXPECT_EQ(transaction_table_.deleteOwnEntry(tid_2_,
                                              ResourceId(5),
                                              AccessMode(AccessModeType::kXLock)),
            TransactionTableResult::kDelError);

  // Transaction 3 does not have a lock on this resource id.
  EXPECT_EQ(transaction_table_.deleteOwnEntry(tid_3_,
                                              ResourceId(5),
                                              AccessMode(AccessModeType::kSLock)),
            TransactionTableResult::kDelError);

  // This will result in success since transaction 2 have acquired the lock on
  // this resource with the corresponding mode.
  EXPECT_EQ(transaction_table_.deleteOwnEntry(tid_2_,
                                              ResourceId(5),
                                              AccessMode(AccessModeType::kSLock)),
            TransactionTableResult::kDelFromOwned);

  // Repeat the previous sequence, with pending list.
  EXPECT_EQ(transaction_table_.deletePendingEntry(tid_2_,
                                                  ResourceId(5),
                                                  AccessMode(AccessModeType::kSLock)),
            TransactionTableResult::kDelError);

  EXPECT_EQ(transaction_table_.putPendingEntry(tid_2_,
                                               ResourceId(5),
                                               AccessMode(AccessModeType::kSLock)),
            TransactionTableResult::kPlacedInPending);

  EXPECT_EQ(transaction_table_.deletePendingEntry(tid_2_,
                                                  ResourceId(5),
                                                  AccessMode(AccessModeType::kXLock)),
            TransactionTableResult::kDelError);

  EXPECT_EQ(transaction_table_.deletePendingEntry(tid_3_,
                                                  ResourceId(5),
                                                  AccessMode(AccessModeType::kSLock)),
            TransactionTableResult::kDelError);

  EXPECT_EQ(transaction_table_.deletePendingEntry(tid_2_,
                                                  ResourceId(5),
                                                  AccessMode(AccessModeType::kSLock)),
            TransactionTableResult::kDelFromPending);
}

TEST_F(TransactionTableTest, TransactionEntries) {
  EXPECT_EQ(transaction_table_.deleteTransaction(tid_1_),
            TransactionTableResult::kTransactionDeleteError);

  EXPECT_EQ(transaction_table_.putOwnEntry(tid_1_,
                                           ResourceId(4),
                                           AccessMode(AccessModeType::kSLock)),
            TransactionTableResult::kPlacedInOwned);

  EXPECT_EQ(transaction_table_.deleteTransaction(tid_1_),
            TransactionTableResult::kTransactionDeleteOk);

  EXPECT_EQ(transaction_table_.deleteOwnEntry(tid_1_,
                                              ResourceId(4),
                                              AccessMode(AccessModeType::kSLock)),
            TransactionTableResult::kDelError);
}

}
}
