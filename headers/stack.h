#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>

#define bool unsigned int
#define true 1
#define false 0

#define DEFAULT_MAX_LENGTH 10

typedef struct stack {
    int length;
    int max_length;
    int* stack_ptr;
} stack;

stack init_stack();
stack create_stack(const int* elements_array, const int length);
void push(stack* pst, const int element);
void pop(stack* pst);
int top(const stack st);
bool isEmpty(const stack st);
int get_length(const stack st);
void freeStack(stack* pst);

#endif