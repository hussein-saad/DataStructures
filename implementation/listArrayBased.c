#include "listArrayBased.h"

void creat_list(List* l){
	l->size=0;
}

void insert(int pos,Entry item,List* l){
	for(int i = l->size; i>pos; i--)
		l->e[i]=l->e[i-1];
	l->e[pos]=item;
	l->size++;
}

void delete(int pos,Entry *item,List* l){
	*item=l->e[pos];
	for(int i = pos;i<l->size-1;i++)
		l->e[i]=l->e[i+1];
	l->size--;
}

int empty(List* l){
	return !l->size;
}

int full(List* l){
	return (l->size==MAX_LIST);
}

int size(List* l){
	return l->size;
}

void clear(List* l){
	l->size=0;
}

void traverse(List* l, void(*ptr)(Entry)){
	for(int i = 0; i < l->size;i++)
		(*ptr)(l->e[i]);
}

void get(int pos,Entry* item,List* l){
	*item=l->e[pos];
}
