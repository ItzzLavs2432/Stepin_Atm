#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

typedef struct node {
    char statement[50];
    struct node* link;
} node;


void pinGeneration(void);
int checkPin(void);
void showBalance(int *);
void depositMoney(node **, int *);
void withdrawMoney(node **, int *);
void saveHistory(node **, char *);
void removeHistory(node **);
void showHistory(node **);