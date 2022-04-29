#pragma once

// It represents the list of transactions that have not yet been processed
typedef struct _TransactionPool TransactionPool;

// Method to create an new empty transaction pool
// It returns the created transaction pool
TransactionPool *init_transaction_pool();