#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
	ll t;cin >> t;
	while(t--){
		ll n,k;cin >> n >> k;
		ll v[n] ={};
		for(ll i=0;i<n;i++)cin >> v[i];
		sort(v,v+n);
		ll belakang=n-k-1,depan=0;
		ll ans=v[n-1]-v[k];
		ans =min(ans,v[belakang]-v[depan]);
		while(belakang < n){
			ans = min(ans,v[belakang++]-v[depan++]);
		}
		cout << ans << endl;
	}
}
