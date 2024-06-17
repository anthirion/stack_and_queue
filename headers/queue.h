#ifndef QUEUE_H
#define QUEUE_H

typedef struct queue {
    int length;
    int max_length;
    int* queue_ptr;
} queue;

queue init_queue();
queue create_queue(const int* elements_array, const int length);
void enqueue(queue* pq, const int element);
void dequeue(queue* pq);
int first(const queue q);
int last(const queue q);
bool isEmptyQueue(const queue q);
int get_queue_length(const queue q);
void freeQueue(queue* pq);

#endif