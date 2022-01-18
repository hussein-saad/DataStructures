#include <stdio.h> // this is my changeesss
#include <stdlib.h>
#include "stack.h"
void menu(){
	printf("(a) clear the stack.\n");
	printf("(b) read an element than push it.\n");
	printf("(c) pop an element than display it.\n");
	printf("(d) what is the stack size.\n");
	printf("(e) return the stack top\n");
	printf("(f) exit.\n");
	printf("choice an option from [a:f]\n");
}
void read(Stack *st){
	char c;
	printf("Enter char to be pushed in stack: ");
	scanf(" %c",&c);
	if(!is_stack_full(st))
		push(c,st);
	else
		printf("the element can't be pushed cause the stack is full\n");
}
void pop_ele(Stack *st){
	char c;
	if(!empty(st)){
		pop(&c,st);
		printf("the poped element is %c\n",c);
	}
	else
		printf("the stack is empty\n");
}
char stack_top(Stack *st){
	char e;
	pop(&e,st);
	push(e,st);
	return e;
}
void return_stack_top(Stack *st){
	if(!empty(st))
		printf("the stack top is %c\n",stack_top(st));
	else
		printf("the stack is empty\n");
}
int main(void) {
	Stack st;
	creat_stack(&st);
	char c;
	do{
		menu();
		scanf(" %c",&c);
		switch(c){
		case 'a':
			clear(&st);
			break;
		case 'b':
			read(&st);
			break;
		case 'c':
			pop_ele(&st);
			break;
		case 'd':
			printf("the stack size is %d\n",size(&st));
			break;
		case 'e':
			return_stack_top(&st);
			break;
		case 'f':
			break;
		default:
			printf("invalid choice, try again\n");
		}
	}while(c!='f');
}
