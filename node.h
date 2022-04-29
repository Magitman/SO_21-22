#pragma once

#include "transazione.h"

// It represents the list of transactions that have not yet been processed
typedef struct _TransactionPool TransactionPool;

// Method to create an new empty transaction pool
// It returns the created transaction pool
TransactionPool *init_transaction_pool();

// It adds a transaction to the pool
// It returns 1 if the transaction is successfully added, 0 otherwise
int addTransaction(TransactionPool *, Transaction *);

Transaction *getTransaction(TransactionPool *, int);

void processTransaction();

void free_transaction_pool(TransactionPool *);