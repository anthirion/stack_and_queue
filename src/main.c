#include <stdlib.h>
#include <stdio.h>

#include "stack.h"

int main() {
    int elements_array[6] = {1, 4, 9, 12, -5, -8};

    stack st = create_stack(elements_array, 6);
    freeStack(&st);

    return 0;
}