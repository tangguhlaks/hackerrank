#include<bits/stdc++.h>
using namespace std;
int a,b;
int identik(int arr[][80], int brr[][80]){
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= a; j++){
            if(arr[i][j] != brr[i][j]) return 0;
        }
    }

    return 1;
}

int vertikal(int arr[][80], int brr[][80]){
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= a; j++){
            if(arr[j][i] != brr[j][a-i+1]) return 0;
        }
    }

    return 1;
}

int horizontal(int arr[][80], int brr[][80]){
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= a; j++){
            if(arr[i][j] != brr[a-i+1][j]) return 0;
        }
    }

    return 1;
}

int kiri(int arr[][80], int brr[][80]){
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= a; j++){
            if(arr[i][j] != brr[a-j+1][a-i+1]) return 0;
        }
    }

    return 1;
}

int kanan(int arr[][80], int brr[][80]){
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= a; j++){
            if(arr[i][j] != brr[j][i]) return 0;
        }
    }

    return 1;
}

int main(){
    int arr[80][80], brr[80][80];
    cin >> a >> b;
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= a; j++){
            cin >> arr[i][j];
        }
    }

    cin >> a >> b;
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= a; j++){
            cin >> brr[i][j];
        }
    }

    if(identik(arr,brr)) cout << "identik" << endl;
    else if(vertikal(arr,brr)) cout << "vertikal" << endl;
    else if(horizontal(arr,brr)) cout << "horisontal" << endl;
    else if(kiri(arr,brr)) cout << "diagonal kiri bawah" << endl;
    else if(kanan(arr,brr)) cout << "diagonal kanan bawah" << endl;
    else cout << "tidak identik" << endl;
}
