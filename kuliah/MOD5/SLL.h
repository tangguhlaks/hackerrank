#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED

#include <iostream>
using namespace std;

typedef string infotype;
typedef struct element *adr;

struct element {
	infotype info;
	adr next;
};

struct List{
	adr first;
};

void createList_1302213026(List &A);
adr newElement_1302213026(infotype x);
void insertLast_1302213026(List &A,adr p);
void show_1302213026(List A);
adr longestName_1302213026(List A);
void showFirstKNameC_1302213026(List A,int k,char c);
#endif
