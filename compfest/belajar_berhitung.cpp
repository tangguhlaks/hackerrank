#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n;cin >> n;
	ll ans=0;
	ll l,r;
	vector<pair<ll,ll>> v;
	for(ll i=0;i<n;i++){
		cin >> l >> r;
		v.push_back({l,r});
	}
	sort(v.begin(),v.end());
	l=v[0].first;
	r=v[0].second;
	for(ll i=1;i<n;i++){
		if(v[i].first>r){
			ans+=(r-l+1)*(l+r)/2;
			l = v[i].first;
			r = v[i].second;
		}else {
			r=max(r,v[i].second);
		}
	}
	ans+=(r-l+1)*(l+r)/2;
	cout << ans << endl;
}
