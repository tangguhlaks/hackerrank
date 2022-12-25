#include "DLL.h"
#include "DLL.cpp"

int main()
{
    List L;
    string nama_nasabah;
    int pilih, n, ID_nasabah, tahun_daftar, iuran_bulanan;
    float terbesar;
    infotype info;
    adr p;
    char kembali;

    createList_1302210025(L);
    pilih = Menu_1302210025();

    while(pilih != 0)
    {
        if(pilih == 1)
        {
            cout<<"Jumlah data yang akan ditambahakan: ";
            cin>>n;
            for(int a = 0; a < n; a++)
            {
                cout<<"ID Nasabah: ";
                cin>>ID_nasabah;
                cout<<"Nama Nasabah: ";
                cin>>nama_nasabah;
                cout<<"Tahun Daftar: ";
                cin>>tahun_daftar;
                cout<<"Iuran Bulanan: ";
                cin>>iuran_bulanan;
                info = CreateNewInfo_1302210025(ID_nasabah, nama_nasabah, tahun_daftar, iuran_bulanan);
                p = createNewElmt_1302210025(info);
                InsertFirst_1302210025(L, p);
            }
        }else if(pilih == 2)
        {
            showAllData_1302210025(L);
        }else if(pilih == 3)
        {
            reverseList_1302210025(L);
        }else if(pilih == 4)
        {
            terbesar = secondBiggest(L);
            cout<<"Iuran Terbesar Kedua: "<<terbesar<<endl;
        }
        cout<<"Kembali ke menu utama?(Y/N)";
        cin>>kembali;
        if(kembali == 'Y')
        {
            pilih = Menu_1302210025();
        }else
        {
            return 0;
        }
    }
}
