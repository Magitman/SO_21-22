#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "utente.h"
#include "transazione.h"

#define SO_BUDGET_INIT 70
#define SO_RETRY 10
#define SO_MIN_TRANS_GEN_NSEC 1000000
#define SO_MAX_TRANS_GEN_NSEC 2000000000000000

struct _Transaction
{
    char *sender;
    char *receiver;
};

int current_balance;

int update()
{
    current_balance = SO_BUDGET_INIT + 0 /*vedi libro*/ - 0 /*transaction*/;

    int index = SO_RETRY;
    while (index)
    {
        if (current_balance >= 2)
        {
            // estrae un altro processo
            int quantity = (rand() % (current_balance - 1)) + 2;
            // crea transazione con un valore casuale compreso tra 2 e current balance

            // seleziona un nodo
        }
        if (/* abbiamo creato la transazione */ 1)
        {
            // invia la transazione al nodo
            int wait_seconds = (rand() % (SO_MAX_TRANS_GEN_NSEC - SO_MIN_TRANS_GEN_NSEC + 1)) + SO_MIN_TRANS_GEN_NSEC;
        }
        index--;
    }
    if (!index)
    {
        // termina
    }
}