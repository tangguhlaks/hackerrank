#include "SLL.h"
#include "SLL.cpp"
#include <iostream>
#include <ostream>
int main(){
	List A;
	adr pp;
	int x=1;
	createList_1302213026(A);
	while (x != 0) {
		cout << "===== MENU =====" << endl;
		cout << "1. Menambahkan N data baru" << endl;
		cout << "2. Menampilkan semua data" << endl;
		cout << "3. Menampilkan nama terpanjang" << endl;
		cout << "4. Menampilkan K pengunjung pertama dengan awalan karakter tertentu" << endl;
		cout << "Pilihan anda : ";
		cin >> x ;

		if(x == 1){
			int n;
			cout << "Jumlah data yang akan di tambahkan : ";
			cin >> n;
			string s;
			for(int i=1;i<=n;i++){
				cout << "Masukan data baru : ";
				cin >> s;
				adr p = newElement_1302213026(s);
				insertLast_1302213026(A,p);
			}	
		}else if(x == 2){	
			show_1302213026(A);
		}else if(x == 3){
			adr p = longestName_1302213026(A);
			cout << "Address Nama terpanjang : " << p << endl;
			cout << "Nama terpanjang : " << (p)->info << endl;
		}else if(x == 4){
			char c;int k;
			cout << "Jumlah Data : ";
			cin >> k;
			cout << "Karakter Pertama : ";
			cin >> c;
			showFirstKNameC_1302213026(A,k,c);
		}else if(x == 0){
			cout << "Selamat Tinggal " << endl;
		}else{
			cout << "Pilihan Tidak Tersedia " << endl;
		}

	}
}
