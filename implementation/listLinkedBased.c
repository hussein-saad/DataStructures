#include "listLinkedBased.h"
#include <stdlib.h>

void creat_list(List* l){
	l->size=0;
	l->head=NULL;
}

void insert(int pos,Entry item,List* l){
	Node* ln = (Node*)malloc(sizeof(Node));
	ln->e=item;
	ln->next=NULL;
	if(pos==0){
		ln->next=l->head;
		l->head=ln;
		l->curPtr=l->head;
		l->curPos=0;
	}
	else{
		if(pos<=l->curPos){
			l->curPtr=l->head;
			l->curPos=0;
		}
		else{
			for(;l->curPos < pos-1;l->curPos++)
				l->curPtr=l->curPtr->next;
			ln->next=l->curPtr->next;
			l->curPtr->next=ln;
		}
	}
	l->size++;
}

void delete(int pos,Entry *item,List* l){
	Node* temp;
	if(pos==0){
		*item=l->head->e;
		l->curPtr=l->head->next;
		free(l->head);
		l->head=l->curPtr;
	}
	else{
		if(pos<=l->curPos){
			l->curPtr=l->head;
			l->curPos=0;
		}
		for(; l->curPos!=pos-1;l->curPos++)
			l->curPtr = l->curPtr->next;
		*item=l->curPtr->next->e;
		temp=l->curPtr->next->next;
		free(l->curPtr->next);
		l->curPtr->next=temp;
	}
	l->size--;
}

int empty(List* l){
	return !l->size;
}

int full(List* l){
	return 0;
}

int size(List* l){
	return l->size;
}

void clear(List* l){
	Node* temp=l->head;
	while(temp){
		temp=temp->next;
		free(l->head);
		l->head=temp->next;
	}
	l->size=0;
}

void traverse(List* l, void(*ptr)(Entry)){
	Node* temp=l->head;
	while(temp){
		(*ptr)(temp->e);
		temp=temp->next;
	}
}

void get(int pos,Entry* item,List* l){
	Node* temp=l->head;
	for(int i = 0; i<pos;i++)
		temp=temp->next;
	*item = temp->e;
}
