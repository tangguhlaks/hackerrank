#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
	ll t;cin >> t;
	while(t--){
		ll n,m;cin >> n >> m;
		ll halaman[n+1];
		ll time[m+1] = {0};
		for(ll i=1;i<=n;i++)cin >> halaman[i];
		for(ll i=1;i<=n;i++){
			ll jenis;cin >> jenis;
			time[jenis] += halaman[i];
		}
		ll ans;
		ll tans=0;
		for(ll i=1;i<=m;i++){
			ll v;cin >> v;
			ll hari =(time[i]+v-1)/v;
			if(hari > tans){
				ans =i;
				tans = hari;
			}
		}
		cout << ans << endl;
	}
}
