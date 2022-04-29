#include <stdlib.h>
#include <stdio.h>
#include "node.h"

/* ----- DEFINE MACROS ----- */

#define SO_BLOCK_SIZE 3
#define SO_TP_SIZE 8

/* ----- STRUCTS DECLARATION ----- */

struct _TransactionPool
{
    struct _Transaction **transactions;
    int length; // It represents the number of elements actually stored into the pool.
};

TransactionPool *init_transaction_pool()
{
    TransactionPool *transaction_pool = (TransactionPool *)malloc(sizeof(TransactionPool));
    if (transaction_pool == NULL)
    {
        fprintf(stderr, "Method: init_transaction_pool.\nError: unable to allocate memory for the TransactionPool struct");
        exit(EXIT_FAILURE);
    }

    transaction_pool->transactions = (Transaction **)malloc(SO_TP_SIZE * sizeof(Transaction *));
    if (transaction_pool->transactions == NULL)
    {
        fprintf(stderr, "Method: init_transaction_pool.\nError: unable to allocate memory for the TransactionPool struct");
        exit(EXIT_FAILURE);
    }

    transaction_pool->length = 0;

    return (transaction_pool);
}

int addTransaction(TransactionPool *transaction_pool, Transaction *transaction)
{
    if (transaction_pool->length == SO_TP_SIZE)
    {
        return 0;
    }

    transaction_pool->transactions[transaction_pool->length] = transaction;
    TransactionPool->length++;
    return 1;
}

Transaction *getTransaction(TransactionPool *transaction_pool, int index)
{
    if (transaction_pool == NULL || index == NULL)
    {
        fprintf(stderr, "Method: getTransaction.\nError: treansaction_pool parameter can not be NULL");
        exit(EXIT_FAILURE);
    }
    if (index < 0 || index > transaction_pool->length)
    {
        fprintf(stderr, "Method: getTransaction.\nError: index parameter out of range");
        exit(EXIT_FAILURE);
    }

    return transaction_pool->transactions[index];
}

void processTransaction()
{
    for (int index = 0; index < SO_BLOCK_SIZE - 1; index++)
    {
        /* code */
    }
}

void free_transaction_pool(TransactionPool *transaction_pool)
{
    if (transaction_pool == NULL)
    {
        fprintf(stderr, "Method: free_transaction_pool.\nError: transaction_pool parameter can not be NULL");
        exit(EXIT_FAILURE);
    }

    for (int index = 0; index < transaction_pool->length; index++)
    {
        free(transaction_pool->transactions[index]);
    }
    free(transaction_pool->transactions);
    free(transaction_pool);
}