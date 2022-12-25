#include "SLL.h"
#include <iostream>
#include <ostream>

void createList_1302213026(List &A){
	((A).first) =NULL;
}

adr newElement_1302213026(infotype x){
	adr P = new element;
	(P)->info = x;
	(P)->next = NULL;
	return P;
}
void insertLast_1302213026(List &A,adr p){
	adr q = (A).first;
	if(q == NULL){
		(A).first =p;
	}else{
		while ((q)->next != NULL) {
			q = (q)->next;
		}
		(q)->next = p;
	}
}
void show_1302213026(List A){
	if((A).first != NULL){
		adr p= (A).first;
		while (p!=NULL) {
			cout << (p)->info << endl;
			p = (p)->next;
		}
		cout << endl;
	}else{
		cout << "List Kosong" << endl;
	}
}

adr longestName_1302213026(List A){
	adr p= (A).first;
	adr ans = (A).first;
	while (p!=NULL) {
		if((ans)->info.length() < (p)->info.length())ans = p;
		p = (p)->next;
	}	
	return ans;
}

void showFirstKNameC_1302213026(List A,int k,char c){
	adr p= (A).first;
	int cc=1;
	while (p!=NULL && cc<=k) {
		if((p)->info[0] == c){ 
			cout << (p)->info << endl;
			cc++;
		}
		p = (p)->next;
	}
	cout << endl;
}


