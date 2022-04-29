#include <time.h>
#include "transazione.h"

#define SO_REWARD 10

char *sender;
char *receiver;
int quantity;

void timestamp(int clock_gettime(clockid_t clock_id, struct timespec *tp))
{
}

//metodo per inizializzare INIT, così da non fare mille passaggi ogni volta
void setSender(char *newsender)
{
    sender = newsender;
}

void setReceiver(char *newreceiver)
{
    receiver = newreceiver;
}

char *getSender() {
    return sender;
}

char *getReceiver() {
    return receiver;
}

void setQuantity(int q) {
    quantity = q;
}

int getQuantity() {
    return quantity;
}

int getReward() {
    return quantity*SO_REWARD/100;
}