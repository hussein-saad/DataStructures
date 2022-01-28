#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#define MAX 1000
typedef char StackEntry;
typedef struct stack
{
	int top;
	StackEntry entry[MAX];

}Stack;

void creat_stack(Stack *st);
void push(StackEntry item,Stack *st);
int is_stack_full(Stack *st);
void pop(StackEntry* e,Stack *st);
int empty(Stack *st);
StackEntry top(Stack *st);
int size(Stack *st);
void trverse(Stack *st,void(*ptr)(StackEntry));
void clear(Stack *st);

#endif
