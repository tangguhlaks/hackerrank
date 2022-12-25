#include <bits/stdc++.h>
using namespace std;
#define ll long long



int main(){
	ll t; cin >> t;
	while (t--) {
		ll n;cin >> n;
		priority_queue<pair<ll,ll>> v;
		vector<ll> vl,vr;
		for(ll i=0;i<n;i++){
			ll tmp;cin >> tmp;
			if(tmp > 0){
				v.push(make_pair(tmp,i+1));
			}
		}
		while (v.size()>1) {
			auto a = v.top();
			v.pop();
			auto b = v.top();
			v.pop();
			vl.push_back(a.second);
			vr.push_back(b.second);
			a.first--;
			b.first--;
			if(a.first != 0){
				v.push(a);
			}
			if(b.first != 0){
				v.push(b);
			}
		}
		cout << vl.size() << endl;
		for(ll i=0;i<vl.size();i++)cout << vl[i] << " " << vr[i] << endl;
	}
}
