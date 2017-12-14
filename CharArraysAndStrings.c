//
//  CharArraysAndStrings.c
//  cPractice
//
//  Created by Josh Ortiz on 10/17/17.
//  Copyright © 2017 Josh Ortiz. All rights reserved.
//
// The folowing demonstrates a function that converts a decimal value to a base b, and
// for bases 11-36, correctly substitutes letters for digits where required.

#include <stdio.h>
#include <assert.h>
#define BUF_SIZE 100
void printBaseB(unsigned x, unsigned b);

/*
int main(void){
    printBaseB(10011988, 3);
    char x = "Hello"[0];
    printf("%c\n", x);
    double var = 2.3;
    double parr[] = {2.4, 2.6};
    double *px[] = {&var, parr, NULL};
    // ALternatively trying to print pa[1] will be a pointer to a double, i.e a memory address 0xSOMENUMBER
    printf("%g", *px[1]);
    
    int a1[] = {1, 2, 3, 4};
    int a2[] = {5, 6, 7};
    int *pa[] = {a1, a2};
    int **pp = pa;
    int *p = pa[1];
    int val;
    
    // All equal ways of accessing the value 6
    val = pa[1][1];
    printf("%d\n", val);
    val = pp[1][1];
    printf("Val as pp[1][1] : %d\n", val);
    
    //Pointer plus offset version
    val = *(pa[1] +1);
    printf("Val as *(pa[1]+1): %d\n", val);
    
    // Dereferenced pp, which points to pa, which itsels is an array and pa[1] is a pointer to a2, then +1, is a2+1 = a2[1];
    val = *(pp[1]+1);
    printf("Val as *(pp[1]+1): %d]n", val);
    
    // some funky dereferencing
    
    return 0;
}

void printBaseB(unsigned x, unsigned b){
    char buf[BUF_SIZE];
    int q=x, i=0;
    assert(b >= 2);
    
    // Calculate digit for each place in base b
    do{
        assert(i < BUF_SIZE);
        x = q;
        //printf("x assigned val: %d\n", q);
        q = x/b;
        //printf("q now equals: %d\n", q);
        buf[i++] = "0123456789abcdefghijklmnopqrstuvwxyz"[x-q*b];
        //printf("Referenced: %d\n", (x-q*b));
    } while (q > 0);
    
    for (--i; i >= 0; --i)
        printf("%c", buf[i]);
    printf("\n");
}
*/
