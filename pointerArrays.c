//
//  pointerArrays.c
//  cPractice
//
//  Created by Josh Ortiz on 10/16/17.
//  Copyright © 2017 Josh Ortiz. All rights reserved.
//
// Some applications of pointer arrays involve pointers to large objects
// and pointers to arrays.
//
// The following is an example of an array of pointers to arrays

#include <stdio.h>

/*
int main(void){
    //If we tried to declare this array as a non pointer array, i.e char months[], it would
    // cause an error and not compile
    char *months[] = {"Illegal", "January", "February", "March",
        "April", "May", "June", "July", "August", "September",
        "October", "November", "December"
    };
    int i, j;
    printf("Input an integer Between 1 and 12: ");
    scanf("%d", &i);
    if (i <1 || i > 12) i = 0;
    
    printf("Moth number %d is %s.\n", i, months[i]);
    printf("The letters of the month are: ");
    for (j = 0; months[i][j] != '\0'; ++j)
        printf("%c\n", months[i][j]);
    
}
*/
