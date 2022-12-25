#include "SLL.h"
#include <iostream>

void createList(List &A){
	((A).first) =NULL;
}

adr newElement(infotype x){
	adr P = new element;
	(P)->info = x;
	(P)->next = NULL;
	return P;
}
void insertFirst(List &A,adr p){
	if(((A).first)  == NULL){
		((A).first) = p;
	}else{
		(p)->next = ((A).first);
		((A).first) = p;
	}
}
void show(List A){
	if((A).first != NULL){
		adr p= (A).first;
		while (p!=NULL) {
			cout << (p)->info << " ";
			p = (p)->next;
		}
		cout << endl;
	}else{
		cout << "List Kosong" << endl;
	}
}
adr deleteLast(List &A){
	adr p,q;
	if(((A).first) == NULL){
		p = NULL; 
		cout << "List Kosong" << endl;
	}else if(((A).first)->next == NULL){
		p = (A).first;
		(A).first = NULL;
	}else{
		q = (A).first;
		p = (A).first;
		while ((p)->next != NULL) {
			q = p;
			p = (p)->next;
		}
		(q)->next = NULL;
	}
	return p;
}
void insertAfter(List &A,adr p,adr after){	
	(p)->next = (after)->next;
	(after)->next = p;
}
void deleteFirst(List &A){
	adr p;
	if(((A).first) == NULL){
		p = NULL; 
		cout << "List Kosong" << endl;
	}else{
		p = ((A).first)->next;
		(A).first = p;	
	}
}


