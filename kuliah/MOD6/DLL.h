#ifndef DLL_H_INCLUDED
#define DLL_H_INCLUDED

#include <iostream>
using namespace std;

struct penjualan_rumah{
	int id_faktur;
	int luas;
	string nomor_rumah;
};

typedef penjualan_rumah infotype;
typedef struct element *adr;

struct element {
	infotype info;
	adr next,prev;
};

struct List{
	adr first,last;
};

void createList_1302210025(List &A);
adr newElement_1302210025(infotype x);
void insertFirst_1302210025(List &A,adr p);
void show_1302210025(List A);
int jumlahData_1302210025(List A);
#endif
