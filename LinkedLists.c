//
//  LinkedLists.c
//  cPractice
//
//  Created by Josh Ortiz on 10/10/17.
//  Copyright © 2017 Josh Ortiz. All rights reserved.
//
// C doesn't support generics but we can use a void pointer and function pointer to get the saem funcitonality

#include <stdio.h>
#include <stdlib.h>
/*
struct Node {
    void *data;
    struct Node *next;
};

// Function adds a node to the beginning of Linked List
// Function expects a pointer to the data to be added and size of the
// data type.

void push (struct Node** headReference, void *newData, size_t dataSize){
    // Allocate memory for the node
    // Analagous to declarying a new object in java
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = malloc(dataSize);
    newNode->next = (*headReference);
    
    // Copy the contents of newData to newly allocated memory
    // Assumption: char takes 1 byte.
    int i;
    for (i = 0; i < dataSize; i++){
        *(char *) (newNode->data +i) = *(char*)(newData+i);
    }
    
    //Change head pointer as new node is added to the beginning
    (*headReference) = newNode;
}

void printList(struct Node *node, void (*fptr) (void*)){
    while (node != NULL){
        (*fptr) (node->data);
        node = node->next;
    }
}

void printInt(void *n){
    printf(" %d", *(int*)n);
}

void printFloat(void *f){
    printf(" %f", *(float*)f);
}

int main(){
    struct Node *start = NULL;
    
    // Create and print an int linked list
    unsigned intSize = sizeof(int);
    int arr[] = {10, 20, 30, 40, 50};
    for (int i = 4; i >= 0; i--)
        push(&start, &arr[i], intSize);
    printList(start, printInt);
}
*/
