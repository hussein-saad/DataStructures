#include "queueArrayBased.h"

void creat_queue(Queue *q){
	q->front=0;
	q->rear=-1;
	q->size=0;
}

void push_back(queueEntry item, Queue *q){
	// if q->rear +1 = MAX_QUEUE it will return 0 other wise return q->rear+1
	q->rear = (q->rear+1)%MAX_QUEUE;
	q->entry[q->rear]=item;
	q->size++;
}

void pop(queueEntry *item,Queue *q){
	*item=q->entry[q->front];
	q->front = (q->front+1)%MAX_QUEUE;
	q->size--;
}

int empty(Queue *q){
	return !q->size;
}

int full(Queue *q){
	return q->size==MAX_QUEUE;
}

int size(Queue *q){
	return q->size;
}

void clear(Queue *q){
	q->front=0;
	q->rear=-1;
	q->size=0;
}

void traverse(Queue *q, void (*ptr)(queueEntry)){
	int pos = q->front;
	for(int i = 0; i < q->size;i++){
		(*ptr)(q->entry[pos]);
		pos=(pos+1)%MAX_QUEUE;
	}
}



