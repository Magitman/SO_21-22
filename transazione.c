#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "transazione.h"

/* ----- DEFINE MACROS ----- */

#define SO_REWARD 10

/* ----- STRUCTS DECLARATION ----- */

struct _Transaction
{
    char *sender;
    char *receiver;
    int quantity;
    int reward;
};

/* ----- TRANSACTION LIBRARY ----- */

Transaction *inittransaction(char *sender, char *receiver, int quantity, int reward)
{
    if (sender == NULL || receiver == NULL || quantity == NULL || reward == NULL || quantity < 0 || reward < 0)
    {
        fprintf(stderr, "Method: inittransaction.\nError: parameters can not be NULL nor smaller than 0");
        exit(EXIT_FAILURE);
    }

    Transaction *transaction = (Transaction *)malloc(sizeof(Transaction));
    if (transaction == NULL)
    {
        fprintf(stderr, "Method: inittransaction.\nError: unable to allocate memory for the transaction struct");
        exit(EXIT_FAILURE);
    }

    transaction->sender = sender;
    transaction->receiver = receiver;
    transaction->quantity = quantity;
    transaction->reward = reward;

    return transaction;
}

void freetransaction(Transaction *transaction)
{
    if (transaction == NULL)
    {
        fprintf(stderr, "Method: freetransaction.\nError: transaction parameter can not be NULL");
        exit(EXIT_FAILURE);
    }

    free(transaction);
}

void timestamp(Transaction *transaction)
{
}

char *getSender(Transaction *transaction)
{
    return transaction->sender;
}

char *getReceiver(Transaction *transaction)
{
    return transaction->receiver;
}

int getQuantity(Transaction *transaction)
{
    return transaction->quantity;
}

int getReward(Transaction *transaction)
{
    return transaction->quantity * SO_REWARD / 100;
}