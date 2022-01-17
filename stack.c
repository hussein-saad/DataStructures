#include "stack.h"


void creat_stack(Stack *st){
	st->top=0;
}
void push(StackEntry item,Stack *st){
	st->entry[st->top++]=item;
}

int is_stack_full(Stack *st){
	return st->top==MAX;
}
void pop(StackEntry* e,Stack *st){
	*e = st->entry[--st->top];
}
int empty(Stack *st){
	return !st->top;
}
StackEntry top(Stack *st){
	return st->entry[st->top-1];
}
int size(Stack *st){
	return st->top;
}
void trverse(Stack *st,void(*ptr)(StackEntry)){
	for(int i = st->top;i>0;i--)
		(*ptr) (st->entry[i-1]);
}
void clear(Stack *st){
	st->top=0;
}
