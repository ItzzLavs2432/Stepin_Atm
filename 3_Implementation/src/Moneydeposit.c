/**
 * @file Moneydeposit.c
 * @author Nune Lavanya
 * @brief 
 * @version 0.1
 * @date 2021-09-08
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include"atm.h"

float moneyDeposit(float balance) {
    float deposit;
    printf("You choose to Deposit a money\n");
    printf("$$$$Your Balance is: $%.2f\n\n", balance);
    printf("****Enter your amount to Deposit\n");
    scanf("%f", &deposit);


    balance += deposit;

    printf("\n****Your New Balance is:   $%.2f\n\n", balance);
    return balance;

}//money deposit