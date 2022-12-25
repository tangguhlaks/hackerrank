#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll mod=998244353;
int main(){
	ll n,f;cin >> n >>f;
	ll arr[n*n][n*n];
	ll idx=0;
	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=n;j++){
			if(idx+j >n){
				arr[i][j] = j+idx-n;
			}else{
				arr[i][j] = j+idx;
			}
		}
		idx++;
	}
	ll x=1;
	for(ll i=1;i<=n;i++){
		ll ans=0;
		for(ll j=1;j<=n;j++){
			//cout << arr[i][j] << " ";
			if(abs(arr[i][j]-arr[i][j+1] && arr[i][x] == 1) <= f)ans++;
		}
		cout << ans << " ";
	}
	cout << endl;
}
