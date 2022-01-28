#include "stackLinkedBased.h"
#include <stdlib.h>

void creat_stack(Stack *st){
	st->top=NULL;
	st->size=0;
}
void push(StackEntry item,Stack *st){
	StackNode *sn =(StackNode*) malloc(sizeof(StackNode));
	sn->entry = item;
	sn->next = st->top;
	st->top = sn;
	st->size++;
	if(st->top->entry < st->min)
		st->min = st->top->entry;

}
StackEntry top(Stack *st){
	return st->top->entry;
}

void pop(StackEntry *item,Stack *st){
	 StackNode* temp=st->top;
	 *item=st->top->entry;
	 st->top=st->top->next;
	 free(temp);
	 st->size--;
}
int empty(Stack *st){
	return !st->top;
}
int is_stack_full(Stack *st){
	return 0;
}
void clear(Stack *st){
	StackNode* temp = st->top;
	while(temp){
		temp = temp->next;
		free(st->top);
		st->top=temp;
	}
	st->size=0;
}

void traverse(Stack *st,void(*ptr)(StackEntry)){
	StackNode* temp = st->top;
	while(temp){
		(*ptr)(temp->entry);
		temp=temp->next;
	}
}

int size(Stack *st){
	return st->size;
}



