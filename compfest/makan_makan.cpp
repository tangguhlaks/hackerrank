#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<pair<ll,ll>> v;
int main(){
	ll n;cin>> n;
	for(ll i=0;i<n;i++){
		ll a,b;cin >> a >> b;
		v.push_back({b,a});
	}
	sort(v.begin(),v.end());
	ll x=1;
	ll ans=0;
	for(ll i=0;i<n;i++){
		if(x<=v[i].second){
			ans++;
			x=v[i].first;
		}
	}

	cout << ans << endl;
}
