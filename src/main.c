#include <stdlib.h>
#include <stdio.h>

#include "global.h"
#include "stack.h"
#include "queue.h"

int main() {
    /*
    * Test stack operations
    */
    int elements_array[6] = {1, 4, 9, 12, -5, -8};
    // array that has more element that the default size
    // int elements_array[12] = {1, 4, 9, 12, -5, -8, 3, 98, 22, 44, 42, 65};

    stack st = create_stack(elements_array, 6);
    // push(&st, 6);
    printf("The element at the top of the stack is: %d\n", top(st));
    pop(&st);
    pop(&st);
    printf("The element at the top of the stack is: %d\n", top(st));
    printf("The list is empty: %s\n", isEmptyStack(st) ? "true" : "false");
    printf("The list has %d elements\n\n", get_stack_length(st));
    freeStack(&st);

    /*
    * Test queue operations
    */
   queue q = create_queue(elements_array, 6);
   enqueue(&q, 5);
   dequeue(&q);
   dequeue(&q);
   printf("The next element of the queue is: %d\n", first(q));
   printf("The last queued element is: %d\n", last(q));
   freeQueue(&q);

    return 0;
}