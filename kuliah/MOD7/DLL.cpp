#include "DLL.h"

void createList_1302210025(List &L){
    first(L) = nil;
    last(L) = nil;
}

adr createNewElmt_1302210025(infotype info){
    adr x = new Elmt;
    info(x) = info;
    next(x) = nil;
    prev(x) = nil;
    return x;
}

infotype CreateNewInfo_1302210025(int ID_nasabah, string nama_nasabah, int tahun_daftar, int iuran_bulanan){
    infotype info;
    info.ID_nasabah = ID_nasabah;
    info.nama_nasabah = nama_nasabah;
    info.tahun_daftar = tahun_daftar;
    info.iuran_bulanan = iuran_bulanan;
    return info;
}

void InsertFirst_1302210025(List &L, adr p){
    if(first(L) == nil && last(L) == nil){
        first(L) = p;
        last(L) = p;
    }else{
        next(p) = first(L);
        prev(first(L)) = p;
        first(L) = p;
    }
};

void showAllData_1302210025(List L){
    if(last(L)!=nil){
        adr P = last(L);
        while (P!=nil){
            cout<<"ID Nasabah: "<<info(P).ID_nasabah<<endl;
            cout<<"Nama Nasabah: "<<info(P).nama_nasabah<<endl;
            cout<<"Tahun Daftar: "<<info(P).tahun_daftar<<endl;
            cout<<"Iuran Bulanan: "<<info(P).iuran_bulanan<<endl;
            P = prev(P);
        }
    }
};

void reverseList_1302210025(List L){
    adr p = first(L);
    if(p != nil)
    {
        while(p != nil)
        {
            cout<<"ID Nasabah: "<<info(p).ID_nasabah<<endl;
            cout<<"Nama Nasabah: "<<info(p).nama_nasabah<<endl;
            cout<<"Tahun Daftar: "<<info(p).tahun_daftar<<endl;
            cout<<"Iuran Bulanan: "<<info(p).iuran_bulanan<<endl;
            p = next(p);
        }
    }else
    {
        cout<<"List kosong"<<endl;
    }
};

float secondBiggest(List L){
    adr p;
    int terbesar = 0;
    int second = 0;
    p = first(L);
    while(p!=nil){
        if (info(p).iuran_bulanan > terbesar){
            terbesar = info(p).iuran_bulanan;
        }else if (info(p).iuran_bulanan > second && info(p).iuran_bulanan != terbesar){
            second = info(p).iuran_bulanan;
        }
        p = next(p);
    }
    return second;
}

int Menu_1302210025(){
    int pilih;
    cout<<"======MENU======"<<endl;
    cout<<"1. Menambahkan N data baru"<<endl;
    cout<<"2. Menampilkan semua data"<<endl;
    cout<<"3. Membalik List"<<endl;
    cout<<"4. Menampilkan angka terbesar Ke 2"<<endl;
    cout<<"0. Exit"<<endl;
    cout<<"Masukkan menu: ";
    cin>>pilih;
    return pilih;
}
