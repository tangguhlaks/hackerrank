#ifndef DLL_H_INCLUDED
#define DLL_H_INCLUDED

#include<iostream>

using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define prev(P) (P)->prev
#define first(L) (L).first
#define last(L) (L).last
#define nil NULL


typedef struct aJiwa infotype;
struct aJiwa{
    int ID_nasabah;
    string nama_nasabah;
    int tahun_daftar;
    int iuran_bulanan;
};

typedef struct Elmt *adr;
struct Elmt
{
    infotype info;
    adr next;
    adr prev;
};
struct List{
    adr first;
    adr last;
};

void createList_1302210025(List &L);
adr createNewElmt_1302210025(infotype info);
void InsertFirst_1302210025(List &L, adr p);
void showAllData_1302210025(List L);
int Menu_1302210025();
void reverseList_1302210025(List L);
infotype CreateNewInfo_1302210025(int ID_nasabah, string nama_nasabah, int tahun_daftar, int iuran_bulanan);
float secondBiggest(List L);

#endif // DLL_H_INCLUDED
