#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define loop(x,i,n) for(ll i=x;i<n;i++)

int main (){
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        int n;
        cin >> n;
        ll arr[105];
        ll cnt = 0, maks = INT_MIN;
        for(int j = 1; j <= n; j++){
            cin >> arr[j];
            cnt += arr[j];
            maks = max(maks,arr[j]);
        }
 
        if(cnt % n == 0) cout << cnt / n << endl;
        else cout << (cnt/n) + 1 << endl;
    }
}

