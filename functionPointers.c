//
//  functionPointers.c
//  cPractice
//
//  Created by Josh Ortiz on 10/16/17.
//  Copyright © 2017 Josh Ortiz. All rights reserved.
//

#include <stdio.h>
#include <assert.h>

/*
double add(double a, double b) {return a+b;}
double sub(double a, double b) {return a-b;}
double mult(double a, double b) {return a*b;}

// Book originally had this function as div() but as of recenlty, div is a reserved word
// in C
double divid(double a, double b) { assert(b != 0.0); return a / b;}
 
//Here (*f) is a function pointer that takes two doubles (double, double)
void executeOperation(double (*f)(double, double), double x, double y){
    double result = f(x,y);
    printf("Result of operation on %3.2f and %3.2f is %6.4f\n", x, y, result);
}

int main(void){
    double val1 = 4.3, val2 = 5.7;
    executeOperation(add, val1, val2);
    executeOperation(sub, val1, val2);
    executeOperation(mult, val1, val2);
    executeOperation(divid, val1, val2);
}
*/
