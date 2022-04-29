#include <stdlib.h>
#include <stdio.h>
#include "node.h"
#include "transazione.h"

/* ----- DEFINE MACROS ----- */

#define SO_BLOCK_SIZE 3
#define SO_TP_SIZE 8

/* ----- STRUCTS DECLARATION ----- */

struct _Transaction
{
    transaction_pool *head;
    transaction_pool *next;
    int num_element;
};

int addTransaction(TransactionPool *tran)
{
    if (TransactionPool->num_element == SO_TP_SIZE)
    {
        return 0;
    }

    TransactionPool->next = tran;
    TransactionPool->num_element++;
    return 1;
}

void processTransaction()
{

    for (int index = 0; index < SO_BLOCK_SIZE - 1; index++)
    {
        /* code */
    }
}

TransactionPool *init_transaction_pool(int *SO_TP_SIZE)
{
    TransactionPool *transaction_pool = (TransactionPool *)malloc(SO_TP_SIZE * sizeof(TransactionPool));
    if (transaction_pool == NULL)
    {
        fprintf(stderr, "Method: init_transaction_pool.\nError: unable to allocate memory for the transaction_pool struct");
        exit(EXIT_FAILURE);
    }
    
}

void free_transaction_pool(TransactionPool *transaction_pool)
{
    if (transaction_pool == NULL)
    {
        fprintf(stderr, "Method: free_transaction_pool.\nError: transaction_pool parameter can not be NULL");
        exit(EXIT_FAILURE);
    }

    free(transaction_pool->head);
    free(transaction_pool);
}