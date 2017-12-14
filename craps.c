//
//  craps.c
//  cPractice
//
//  Created by Josh Ortiz on 10/6/17.
//  Copyright © 2017 Josh Ortiz. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h> // contains prototype for function time
/*
//Enum constants represent the game status
enum Status {CONTINUE, WON, LOST};
int rollDice(void);

int main(void){
    int sum;
    int myPoint;
    enum Status gameStatus;
    
    // Without a type cast to unsigned int here, a compiler warning is thrown
    srand((unsigned int) time(NULL));
    
    // rollDice() calls rand(), important to call rand after srand()
    sum = rollDice();
    
    switch(sum) {
        case 7:
        case 11:
            gameStatus = WON;
            break;
        case 2:
        case 3:
        case 12:
            gameStatus = LOST;
            break;
        default:
            gameStatus = CONTINUE;
            myPoint = sum;
            printf("Point is %d\n", myPoint);
            break;
    }
    
    while ( gameStatus == CONTINUE) {
        sum = rollDice();
        if (sum == myPoint)
            gameStatus = WON;
        else{
            if (sum == 7)
                gameStatus = LOST;
        }
    }
    
    if (gameStatus == WON) {
        printf("WINNER WINNER CHICKEN DINNER!!!\n");
    }
    else
        printf("LOSER!");
    
    return 0;
}

int rollDice(void){
    int die1;
    int die2;
    int workSum;
    
    die1 = 1 + (rand() % 6);
    die2 = 1 + (rand() % 6);
    workSum = die1 + die2;
    
    printf("Player rolled: %d+%d = %d\n",die1, die2, workSum);
    return workSum;
}
*/
