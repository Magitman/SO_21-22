#include "node.h"
#include "transazione.h"

#define SO_BLOCK_SIZE 2
#define SO_TP_SIZE 8

struct _Transaction
{
    transaction_pool *head;
    transaction_pool *next;
    int num_element;
};

int addTransaction(transaction_pool *tran)
{
    if (transaction_pool->num_element == SO_TP_SIZE)
    {
        return 0;
    }

    transaction_pool->next = tran;
    transaction_pool->num_element++;
    return 1;
}

void processTransaction()
{
    transaction_pool *t1 = transaction_pool->head;
    transaction_pool *t2 = transaction_pool->next;
    
    transaction_pool->head = transaction_pool->next->next;
    transaction_pool->num_element -= 2;

    // Ardilla :
    // SCOIATTOLO
    // ZANZARA
    // MOSCA
    /*
    bar
    */
}