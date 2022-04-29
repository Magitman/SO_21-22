#pragma once

// It is the struct which keep the infos about a transaction
typedef struct _Transaction Transaction;

// It creates and initializes a new transaction
Transaction *inittransaction(char *, char *, int, int);

// It frees the memory allocated by the transaction
void freetransaction(Transaction *);

void timestamp(Transaction *);

// It returns the sender of the transaction
char *getSender(Transaction *);

// It returns the receiver of the transaction
char *getReceiver(Transaction *);

// It returns the quantity of the transaction
int getQuantity(Transaction *);

// It returns the amount of reward assigned to the transaction
int getReward(Transaction *);