#include "global.h"
#include "stack.h"

stack init_stack() {
    // Init an empty stack
    stack st;
    st.length = 0;
    st.max_length = DEFAULT_MAX_LENGTH;
    st.stack_ptr = (int*) malloc(st.max_length * sizeof(int));
    return st;
}

void push(stack* pst, int element) {
    pst->length++;
    if (pst->length > pst->max_length) {
        // Increase the max length of the stack
        pst->max_length *= 2;
        int* new_stack_ptr = (int*) malloc(pst->max_length * sizeof(int));
        if (new_stack_ptr) {
            // Copy the old stack in the new stack
            for (int i=0; i < pst->max_length/2; i++)
                new_stack_ptr[i] = pst->stack_ptr[i];
            // Free the old stack
            free(pst->stack_ptr);
            // Update the stack pointer
            pst->stack_ptr = new_stack_ptr;
        }
        else {
            printf("ERROR: No memory left in the heap !!!");
            freeStack(pst);
            exit(EXIT_FAILURE);
        }
    }
    // Add the element at the end
    pst->stack_ptr[pst->length - 1] = element;
}

stack create_stack(const int* elements_array, const int length) {
    stack st = init_stack();
    for (int i=0; i < length; i++)
        push(&st, elements_array[i]);
    return st;
}

void pop(stack* pst) {
    // Delete the element at the top of the stack
    // Do NOT return the element
    // Use top if you want the element at the top
    pst->length--;
    if (pst->length == 0)
        free(pst);
}

int top(const stack st) {
    return st.stack_ptr[st.length - 1];
}

bool isEmptyStack(const stack st) {
    if (st.length == 0)
        return true;
    else
        return false;
}

int get_stack_length(const stack st) {
    return st.length;
}

void freeStack(stack* pst) {
    free(pst->stack_ptr);
    pst->length = 0;
    pst->stack_ptr = NULL;
}