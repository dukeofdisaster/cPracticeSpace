//
//  x86_chap1_exercises.c
//  cPractice
//
//  Created by Josh Ortiz on 11/22/17.
//  Copyright © 2017 Josh Ortiz. All rights reserved.
//

#include <stdio.h>
#include <math.h>
/*
int convertBinaryToDecimal(long long n);

int main()
{
    long long n;
    printf("Enter a binary number: ");
    scanf("%lld", &n);
    printf("%lld in binary = %d in decimal", n, convertBinaryToDecimal(n));
    return 0;
}

int convertBinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        //We'll get the first remainder and move forward
        remainder = n%10;
        //Then we divide the original number by ten to elimanate the Least Significant Bit
        n /= 10;
        //THen we add the value of the elimanted bit to the decimal total, or remainder*2^i
        decimalNumber += remainder*pow(2,i);
        //Then we increment i, the power, because we're checkign the next bit
        ++i;
    }
    return decimalNumber;
}

 */
