#include "global.h"
#include "queue.h"

queue init_queue() {
    // Init an empty queue
    queue q;
    q.length = 0;
    q.max_length = DEFAULT_MAX_LENGTH;
    q.queue_ptr = (int*) malloc(q.max_length * sizeof(int));
    return q;
}

void enqueue(queue* pq, int element) {
    pq->length++;
    if (pq->length > pq->max_length) {
        // Increase the max length of the queue
        pq->max_length *= 2;
        int* new_queue_ptr = (int*) malloc(pq->max_length * sizeof(int));
        if (new_queue_ptr) {
            // Copy the old queue in the new queue
            for (int i=0; i < pq->max_length/2; i++)
                new_queue_ptr[i] = pq->queue_ptr[i];
            // Free the old queue
            free(pq->queue_ptr);
            // Update the queue pointer
            pq->queue_ptr = new_queue_ptr;
        }
        else {
            printf("ERROR: No memory left in the heap !!!");
            freeQueue(pq);
            exit(EXIT_FAILURE);
        }
    }
    // Add the element at the end
    pq->queue_ptr[pq->length - 1] = element;
}

queue create_queue(const int* elements_array, const int length) {
    queue q = init_queue();
    for (int i=0; i < length; i++)
        enqueue(&q, elements_array[i]);
    return q;
}

void dequeue(queue* pq) {
    // Delete the first element of the queue
    // Do NOT return the element
    pq->length--;
    if (pq->length > 0) {
        // copy the elements one by one to the left
        for (int i=0; i < pq->length; i++)
            pq->queue_ptr[i] = pq->queue_ptr[i + 1];
    }
    else
        freeQueue(pq);
}

int first(const queue q) {
    return q.queue_ptr[0];
}

int last(const queue q) {
    return q.queue_ptr[q.length - 1];
}

bool isEmptyQueue(const queue q) {
    if (q.length == 0)
        return true;
    else
        return false;
}

int get_queue_length(const queue q) {
    return q.length;
}

void freeQueue(queue* pq) {
    free(pq->queue_ptr);
    pq->length = 0;
    pq->queue_ptr = NULL;
}