#ifndef QUEUEARRAYBASED_H_
#define QUEUEARRAYBASED_H_
#define MAX_QUEUE 1000
typedef int queueEntry;
typedef struct queue{
	int front;
	int rear;
	int size;
	queueEntry entry[MAX_QUEUE];
}Queue;

void creat_queue(Queue *q);
void push_back(queueEntry item,Queue *q);
void pop(queueEntry *item,Queue *q);
int empty(Queue *q);
int full(Queue *q);
int size(Queue *q);
void clear(Queue *q);
void traverse(Queue *q, void (*ptr)(queueEntry));

#endif
