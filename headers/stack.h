#ifndef STACK_H
#define STACK_H

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
bool isEmptyStack(const stack st);
int get_stack_length(const stack st);
void freeStack(stack* pst);

#endif