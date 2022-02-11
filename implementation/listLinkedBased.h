#ifndef LISTLINKEDBASED_H_
#define LISTLINKEDBASED_H_

typedef int Entry;
typedef struct node{
	Entry e;
	struct node* next;
}Node;
typedef struct list{
	Node *head,*curPtr;
	int size,curPos;
}List;

void creat_list(List* l);
void insert(int pos,Entry item,List* l);
void delete(int pos,Entry *item,List* l);
int empty(List* l);
int full(List* l);
int size(List* l);
void clear(List* l);
void traverse(List* l, void(*ptr)(Entry));
void get(int pos,Entry* item,List* l);
#endif /* LISTLINKEDBASED_H_ */
