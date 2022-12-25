#include <bits/stdc++.h>
using namespace std;
#define ll long long
map<ll,ll> m;
void dnq(vector<ll> v, ll l, ll r, ll h){
	if(l==r) return;
	ll mx = -1, idxmax = 0;
	for(int i = l; i < r; i++){
		if(v[i] > mx){
			mx = v[i];
			idxmax = i;
		}
	}
	// cout << mx << " " << h << "\n";
	if(m.find(mx) == m.end()){
		m[mx] = h;
	}
	dnq(v, l, idxmax, h+1);
	dnq(v, idxmax+1, r, h+1);
}
void solve(){
	ll n; cin >> n;
	m = {};
	vector<ll> v(n);
	for(auto &i:v)cin >> i;
	dnq(v, 0, n, 0);
	for(auto &i:v){
		cout << m[i] << " ";
	}
	cout << "\n";
}
	
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll t; cin >> t;
	while(t--){
		solve();
	}
}	
