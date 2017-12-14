//
//  hitCount.c
//  cPractice
//
//  Created by Josh Ortiz on 11/26/17.
//  Copyright © 2017 Josh Ortiz. All rights reserved.
//

#include <stdio.h>
#include <stddef.h>
#include <string.h>

// For the C version of the kata, given certain limitations
// of the language you will have to use an array of linked lists
// as opposed to the multi-dimensional array in the original kata
// spec.

// For example, given the call of the format:
// counter_effect("1250")
//
// The resulting array looks as follows (top to bottom view):
// nodes[0] = 0 -> 1
// nodes[1] = 0 -> 1 -> 2
// nodes[2] = 0 -> 1 -> 2 -> 3 -> 4 -> 5
// nodes[3] = 0
//

/*
struct Node
{
    int value;
    struct Node *next;
};

struct Node * counter_effect(const char *hit_count, size_t *p_result_count)
{
    struct Node *x = {0, NULL};
    int stringLength = (int)strlen(hit_count);
    printf("%d", stringLength);
    
    return x;
}

int main(void){
    unsigned long y = 21;
    counter_effect("1234512",&y);
    
    return 0;
}
 */
