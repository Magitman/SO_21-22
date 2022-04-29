#pragma once

// It is the struct which keep the infos about a transaction
typedef struct _Transaction Transaction;

Transaction *inittransaction(char*, char*, int, int);

void timestamp(Transaction*);

char *getSender(Transaction*);

char *getReceiver(Transaction*);

int getQuantity(Transaction*);

int getReward(Transaction*);