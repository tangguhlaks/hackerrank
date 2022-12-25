#include "DLL.h"
#include "DLL.cpp"

int main(){
	List A;
	adr pp;
	int x=1;
	createList_1302210025(A);
	while (x != 0) {
		cout << "===== MENU =====" << endl;
		cout << "1. Menambahkan N data baru" << endl;
		cout << "2. Menampilkan semua data" << endl;
		cout << "3. Jumlah Data" << endl;
		cout << "Pilihan anda : ";
		cin >> x ;

		if(x == 1){
			int n;
			cout << "Jumlah data yang akan di tambahkan : ";
			cin >> n;
			infotype xx;
			for(int i=1;i<=n;i++){
				cout << "Masukan ID Faktur : ";
				cin >> xx.id_faktur;
				cout << "Masukan NO Rumah  : ";
				cin >> xx.nomor_rumah;
				cout << "Masukan Luas	   : ";
				cin >> xx.luas;
				cout << endl;
				adr p = newElement_1302210025(xx);
				insertFirst_1302210025(A,p);
			}	
		}else if(x == 2){	
			show_1302210025(A);
		}else if(x == 3){
			cout << "Jumlah Data Penjualan Rumah : " << jumlahData_1302210025(A) << endl;
		}else if(x == 0){
			cout << "Selamat Tinggal " << endl;
		}else{
			cout << "Pilihan Tidak Tersedia " << endl;
		}

	}
}
