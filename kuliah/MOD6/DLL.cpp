#include "DLL.h"
#include <iostream>
#include <ostream>

void createList_1302210025(List &A){
	(A).first = NULL;
	(A).last  = NULL;
}

adr newElement_1302210025(infotype x){
	adr P = new element;
	(P)->info = x;
	(P)->next = NULL;
	(P)->prev = NULL;
	return P;
}
void insertFirst_1302210025(List &A,adr p){
	adr q = (A).first;
	if(q == NULL){
		(A).first = p;
		(A).last  = p;
	}else{
		((A).first)->prev = p;
		(p)->next = q;
		(A).first = p;
	}
}
void show_1302210025(List A){
	if((A).first != NULL){
		adr p= (A).first;
		while (p!=NULL) {
			auto x = (p)->info;
			cout << "ID Faktur : " << x.id_faktur << endl;
			cout << "NO Rumah  : " << x.nomor_rumah << endl;
			cout << "Luas : " << x.luas << endl;
			cout << endl;
			p = (p)->next;
		}
		cout << endl;
	}else{
		cout << "List Kosong" << endl;
	}
}
int jumlahData_1302210025(List A){
	int ans=0;
	adr p = (A).first;
	while (p != NULL) {
		ans++;
		p = (p)->next;
	}
	return ans;
}



