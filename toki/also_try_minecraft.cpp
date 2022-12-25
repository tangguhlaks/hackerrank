#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll kanan[1000000], kiri[1000000]; 
int main() {
     ll n, m; cin >> n >> m;
    vector<ll> v(n);
    for(int i = 0;i < n; i++){
        cin >> v[i];
    }
	kiri[0] = 0;
    for(int i=1;i<= n; i++){
        if(v[i-1] > v[i]){
            kiri[i] = v[i-1] - v[i] + kiri[i-1];
        } else{
            kiri[i] = kiri[i-1];
        }
    }
    reverse(v.begin(), v.end());
    kanan[0] = 0;
    for(int i = 1; i <= n; i++){
        if(v[i-1] > v[i]){
            kanan[i] = v[i-1] - v[i] + kanan[i-1];
        } else{
            kanan[i] = kanan[i-1];
        }
    }
    while(m--){
        ll s,j; cin >> s >> j;
        if(s < j){
            cout << kiri[j-1] - kiri[s-1] << "\n";
        } else{
            cout << kanan[n-j] - kanan[n-s] << "\n";
        }
    }
}
