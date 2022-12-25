#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll a,b;cin >> a >> b;
	ll n;cin >> n;
	vector<pair<ll,ll>> v;
	for(ll i=0;i<n;i++){
		ll t,tt;cin >> t >> tt;
		v.push_back({t,tt});
	}
	ll q;cin >> q;
	while(q--){
		ll r; cin >> r;
		ll ans = 0;
		for(auto i:v){
			ll x = i.first;
			ll y = i.second;
			ll tans = (x-a)*(x-a) +(y-b)*(y-b);
			//cout << ans << " ==== " << pow(r,2) << endl;
			if(tans <= r*r)ans++;
		}
		cout << ans << endl;
	}
}
