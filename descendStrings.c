//
//  descendStrings.c
//  cPractice
//
//  Created by Josh Ortiz on 11/30/17.
//  Copyright © 2017 Josh Ortiz. All rights reserved.
//
// This solution only works for sorting one word, not multiple words, it will sort them but not seperate them
/*
#include <stdio.h>
char* sortTheInnerContent(const char* words, int length);
char* sortTheInnerContent(const char* words, int length)
{
    int n = length, c;
    int d = 0;
    
    char *result = (char*)malloc(n+1);
    const char *pointer;
    char ch;
    pointer = words;
    
    for (ch = 'z'; ch >= 'a'; ch--){
        //x = ch - 'z';
        for (c = 0; c < n ; c++){
            if (*pointer == ch){
                *(result+d) = *pointer;
                d++;
            }
            pointer++;
        }
        pointer = words;
    }
    *(result+d) = '\0';
    return result;
}

int main(void) {
    char *word = "hello";
    int length = 5;
    printf("%s\n",sortTheInnerContent(word, length));
}
*/
