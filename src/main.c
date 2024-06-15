#include <stdlib.h>
#include <stdio.h>

#include "stack.h"

int main() {
    int elements_array[6] = {1, 4, 9, 12, -5, -8};

    stack st = create_stack(elements_array, 6);
    // push(&st, 6);
    printf("The element at the top of the stack is: %d\n", top(st));
    pop(&st);
    printf("The list is empty: %s\n", isEmpty(st) ? "true" : "false");
    printf("The list has %d elements\n", get_length(st));
    freeStack(&st);

    return 0;
}