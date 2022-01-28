#ifndef QUEUELINKEDBASED_H_
#define QUEUELINKEDBASED_H_

typedef int queueEntry;
typedef struct node{
	queueEntry item;
	struct node* next;
}Node;

typedef struct queue{
	Node* front;
	Node* rear;
	int size;
}Queue;

void creat_queue(Queue *q);
void push_back(queueEntry item,Queue *q);
void pop(queueEntry *item,Queue *q);
int empty(Queue *q);
int full(Queue *q);
int size(Queue *q);
void clear(Queue *q);
void traverse(Queue *q, void (*ptr)(queueEntry));

#endif /* QUEUELINKEDBASED_H_ */
