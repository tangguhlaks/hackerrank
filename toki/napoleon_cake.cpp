#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        int n, arr[200010];
        cin >> n;
        for(int j = 1; j <= n; j++){
            cin >> arr[j];
        }

        int cnt = 0;
        for(int j = n; j >= 1; j--){
            cnt = max(cnt,arr[j]);
            if(cnt > 0) arr[j] = 1;
            cnt--;
        }

        for(int j = 1; j < n; j++){
            cout << arr[j] << " ";
        }
        cout << arr[n] << endl;
    }
}
