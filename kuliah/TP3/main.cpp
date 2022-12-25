#include "member.h"
#include <iostream>

using namespace std;

void inputData_1302213026(member &MB) {

    int k;

    cout << "Tuliskan IDNumber : ";
    cin >> MB.IDNumber;

    k = 0;

    while(k < Max) {
        cout << "Poin bulen ke-" << k+1 << ": ";
        cin >> MB.Poin[k];

        k++;
    }

}

float ratarata_1302213026(member MB) {

    float poin = 0;
    int k = 0;

    while (k < Max) {
        poin += MB.Poin[k];
        k++;
    }

    return poin/Max;

}

void showData_1302213026(member MB) {

    cout << "Data Member: " << endl;
    cout << "IDNumber: " << MB.IDNumber << endl;
    cout << "Poin: ";

    for (int i = 0;i < Max;i++) {
        cout << MB.Poin[i] << " ";
    }

    cout << endl;

}
int main()
{
    member M;

    inputData_1302213026(M);
    showData_1302213026(M);

    cout << "Dengan rata-rata Poin: " << ratarata_1302213026(M) << endl;
    return 0;
}
