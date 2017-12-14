//
//  ticTacToe.c
//  cPractice
//
//  Created by Josh Ortiz on 10/8/17.
//  Copyright © 2017 Josh Ortiz. All rights reserved.
//
/*
#include <stdio.h>
#define NUMSTATES 9
enum {NOTHING, CROSS, NOUGHT};
int state[NUMSTATES];
enum TURN {USER, COMPUTER};
enum RESULT {PLAYING, WIN, LOSE, DRAW};
enum TURN turn;
enum RESULT result;

// Declare functions
int getIntFromUser(char* messagePtr);
void plotState(int state[]);
enum RESULT computeResult(int state[], enum TURN turn);
void welcome(void);
enum TURN whoGoesFirst(void);
enum RESULT playGame(enum TURN turn);
void printGameState(int state[]);
void gameOverMessage(enum RESULT result);
int playAgain(void);
void plotState(int state[]);
void getComputerDecision(int state[]);
void getUserDecision(int state[]);
struct whoWon{
    enum RESULT result;
    enum TURN who;
};

int main(void){
    enum TURN turn;
    enum RESULT result;
    int newgame = 1;
    
    welcome();
    
    while(newgame){
        turn = whoGoesFirst();
        result = playGame(turn);
        gameOverMessage(result);
        newgame = playAgain();
    }
}

// DEFINE FUNCTIONS

void welcome(void){
    printf("Welcome to TIC-TAC-TOE by JMO");
    printf("\n----------------------------");
    printf("\nThe object of the game is to get 3 in a row");
    printf("\nThe board is labeled from 1-9 like so\n\n");
    printf("\n\t1|2|3\n\t------\n\t4|5|6\n\t------\n\t7|8|9\n");
}

enum TURN whoGoesFirst(void) {
    int answer = getIntFromUser("\nDo you want to go first? 1=Yes, 0=No: ");
    if (answer)
        return USER;
    else
        return COMPUTER;
}

int getIntFromUser(char * messagePtr){
    int answer;
    printf("%s", messagePtr);
    scanf("%d", &answer);
    return answer;
}

enum RESULT playGame(enum TURN whoseTurn){
    enum TURN justMoved = whoseTurn;
    if (whoseTurn == USER)
        getUserDecision(state);
    if (whoseTurn == COMPUTER)
        getComputerDecision(state);
    for(int i = 1; i < 9; i++){
        if (justMoved == USER){
            getComputerDecision(state);
            justMoved = COMPUTER;
        }
        else{
            getUserDecision(state);
            justMoved = USER;
        }
    }
    return computeResult(state, whoseTurn);
}
// playgame sub function
void getComputerDecision(int state[]){
    int move = getIntFromUser("\nChose a spot to move (1-9)");
    state[move-1] = NOUGHT;
    printGameState(state);
}

// playgame subfunction
void getUserDecision(int state[]){
    int move = getIntFromUser("\nChoose an open spot to move(1-9)");
    state[move-1] = CROSS;
    printGameState(state);
}

// playgame subfunction
enum RESULT computeResult(int state[], enum TURN turn){
    for(int i = 0; i < 9; i++){
        if (state[i] == 0){
            return PLAYING;
        }
    }
    if (state[0] == state[1] && state[1] == state[2]){
        if (state[0] == 1 || state[0] ==2){
            return WIN;
        }
    }
    else if (state[0] == state[5] && state[5] == state[8]){
        if (state[0] == 1 || state[0] == 2){
            return WIN;
        }
    }
    else if (state[3] == state[4] && state[4] == state[5]) {
        if (state[3] == 1 || state[0] == 2){
            return WIN;
        }
    }
    else if (state[6] == state[7] && state[7] == state[8]){
        if (state[6] == 1 || state[6] == 2)
            return WIN;
    }
    return DRAW;
}



void printGameState(int state[]){
    printf("\n\t%d|%d|%d\n\t------\n\t%d|%d|%d\n\t------\n\t%d|%d|%d",
           state[0], state[1], state[2],
           state[3], state[4], state[5],
           state[6], state[7], state[8]);
}

void gameOverMessage (enum RESULT result) {
    struct whoWon x = {result, 0};
    if (x.result == 1 && x.who == 0)
        printf("\nUSER WON!\n");
    else
        printf("\nUSER LOST\n");
}
int playAgain(void){
    return getIntFromUser("Do you want to play again? 1=YES 0=NO");
}

**/

