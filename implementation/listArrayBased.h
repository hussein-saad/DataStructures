#ifndef LISTARRAYBASED_H_
#define LISTARRAYBASED_H_
#define MAX_LIST 1000
typedef int Entry;
typedef struct list{
	Entry e[MAX_LIST];
	int size;
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
#endif /* LISTARRAYBASED_H_ */
