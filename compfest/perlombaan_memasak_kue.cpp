#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
	ll m,n;cin >> m >> n;
	ll arr[m+1],brr[m+1];
	ll crr[n+1],lrr[n+1];
	for(ll i=1;i<=m;i++){
		cin >> arr[i];
		cin >> brr[i];
	}
	for(ll i=1;i<=n;i++){
		cin >> lrr[i];	
		cin >> crr[i];	
	}
	ll ans[n+1]={0};
	for(ll i=1;i<=m;i++){
		ll res[n+1];
		ll mx=0;
		for(ll j=1;j<=n;j++){
			 res[j] =arr[i]*lrr[j]+brr[i]*crr[j];
			 if(mx < res[j])mx=res[j];
		}
		//cout << " MX = " << mx << endl;
		for(ll k=1;k<=n;k++){
			if (res[k] == mx) {
				ans[k]++;
				//cout << k << endl;
			}
		}
	}
	for(ll i=1;i<=n;i++)cout << ans[i] << endl;
}
