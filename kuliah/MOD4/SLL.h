#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED

#include <iostream>
using namespace std;

typedef char infotype;
typedef struct element *adr;

struct element {
	infotype info;
	adr next;
};

struct List{
	adr first;
};

void createList(List &A);
adr newElement(infotype x);
void insertFirst(List &A,adr p);
void show(List A);
adr deleteLast(List &A);
void insertAfter(List &A,adr p,adr after);
void deleteFirst(List &A);
#endif
