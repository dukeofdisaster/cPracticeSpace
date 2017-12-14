//
//  averageWithoutLoops.c
//  cPractice
//
//  Created by Josh Ortiz on 11/23/17.
//  Copyright © 2017 Josh Ortiz. All rights reserved.
//
/*
#include <stdio.h>
int sum(const int *values, unsigned int count){
    if (count == 0)
        return 0;
    // The recursive call here returns values+1, which is the next item in the array
    // Because you will recall that when we refer to an array by name+integer , or name + offset, we are
    // accessing the next element of the array, it also shortens the count by 1, since we're technically
    // referring to a smaller array
    return values[0] + sum(values+1, count-1);
}

int average(const int *values, unsigned int count){
    double avg = sum(values, count) / (double) count;
    return avg + 0.5;
}

int main(void){
    int values[] = {10, 10, 10, 10, 10, 10};
    int avg = average(values, 6);
    printf("The average is: %d\n", avg);
    return 0;
}
*/
