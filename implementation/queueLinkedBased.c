#include <stdlib.h>
#include "queueLinkedBased.h"


void creat_queue(Queue *q){
	q->front=NULL;
	q->rear=NULL;
	q->size=0;
}

void push_back(queueEntry item,Queue *q){
	Node* n = (Node*)malloc(sizeof(Node));
	n->item = item;
	n->next = NULL;
	if(!q->rear)
		q->front=n;
	else
		q->rear->next = n;
	q->rear=n;
	q->size++;
}

void pop(queueEntry *item,Queue *q){
	Node* temp = q->front;
	*item = temp->item;
	q->front = q->front->next;
	free(temp);
	if(!q->front)
		q->rear=NULL;
	q->size--;
}

int empty(Queue *q){
	return !q->rear;
}

int full(Queue *q){
	return 0;
}

int size(Queue *q){
	return q->size;
}

void clear(Queue *q){
	while(q->front){
		q->rear = q->front->next;
		free(q->front);
		q->front=q->rear;
	}
	q->size=0;
}

void traverse(Queue *q, void (*ptr)(queueEntry)){
	Node* temp = q->front;
	while(temp){
		(*ptr)(temp->item);
		temp=temp->next;
	}
}





















