#ifndef STACKLINKEDBASED_H_
#define STACKLINKEDBASED_H_
typedef int StackEntry;

typedef struct stackNode{
	StackEntry entry;
	struct stackNode *next;

}StackNode;

typedef struct stack{
	StackNode *top;
	int size;
	StackEntry min;
}Stack;

void creat_stack(Stack *st);
void push(StackEntry item,Stack *st);
int is_stack_full(Stack *st);
void pop(StackEntry *item,Stack *st);
int empty(Stack *st);
StackEntry top(Stack *st);
int size(Stack *st);
void traverse(Stack *st,void(*ptr)(StackEntry));
void clear(Stack *st);

#endif
