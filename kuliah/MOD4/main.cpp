#include "SLL.h"
#include "SLL.cpp"
#include <iostream>
#include <ostream>
int main(){
	List A;
	cout << "first(A) sebelum createList : " << ((A).first) << endl;
	createList(A);
	cout << "first(A) sebelum createList : " << ((A).first) << endl;
	cout << endl;

	//new element
	adr P = newElement('T');
	cout << "Info(P) : " << (P)->info << endl;
	cout << "Next(P) : " << (P)->next << endl;
	cout << endl;



	//insert element
	cout << "first(A) sebelum insertFirst : " << ((A).first) << endl;
	insertFirst(A, P);
	cout << "first(A) sebelum insertFirst : " << ((A).first) << endl;
	cout << "info First(A) : " << ((A).first)->info << endl; 

	P = newElement('A');
	insertFirst(A,P);	
	cout << "info First(A) : " << ((A).first)->info << endl;


	P = newElement('L');
	insertFirst(A,P);	
	cout << "info First(A) : " << ((A).first)->info << endl;  


	adr myafter = P;
	

	P = newElement('N');
	insertFirst(A,P);	
	cout << "info First(A) : " << ((A).first)->info << endl; 
	cout << endl;
	//show
	show(A);

	//deleteLast(A);
	//show(A);

	//insertAfter
	P = newElement('V');
	insertAfter(A,P,myafter);	
	cout << "info Insert "<< (P)->info << " after " << (myafter)->info <<" : " << endl; 
	show(A);

	deleteFirst(A);
	show(A);
	cout << endl;
}
