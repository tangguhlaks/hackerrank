#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
	ll n,m;cin >> n >> m;
	ll ans = 0;
	for(ll i=1;i<m;i++){
		ans+=i;
	}
	for(ll i=1;i<=n;i++){
		ans+=i*m;
	}
	cout << ans << endl;
}
int main(){
	ll t; cin >> t;
	while(t--){
		solve();
	}
}
