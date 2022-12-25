#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sec second
#define fir first

int main(){
	ll n,m,k,q; cin >> n >> m >> k >> q;
	vector<pair<ll,ll>> v;
	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=m;j++){
			char tmp;cin >> tmp;
			if(tmp == 'X')v.push_back(make_pair(i,j));
		}
	}
	while(q--){
		ll x,y;cin >> x >> y;
		ll ans = 100000000;
		for(auto i:v){
			ll tmp = abs(x-i.first) + abs(y-i.second);
			if(tmp < ans)ans = tmp;
		}
		cout << ans << endl;
	}
}
