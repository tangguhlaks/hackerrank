#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
	ll n,l,r;cin >> n >> l >> r;
	ll c = 0;
	vector<ll> v;
	for (ll i =0;i<n;i++) {
		ll temp ; cin >> temp;
		v.push_back(temp);
	}
	vector<string> arr;
	for (ll i =0;i<n;i++) {
		for (ll j=i;j<n ;j++) {
			string x = to_string(v[i]) + "+" + to_string(v[j]);
			if(count(arr.begin(), arr.end(), x)){

			}else{
				if(i != j && l <= v[i] + v[j] && v[i]+v[j] <= r){
					c++;
					// cout << v[i] << "+" << v[j] << "=" << v[i]+v[j]<<endl; 
					arr.push_back(x);
				}
			}
		}
	}
	cout << c << endl;
	
}
int main(){
	// cin.tie(0);
	ll t; cin >> t;
	while(t--){
		solve();
	}
}
