#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i,n) for(ll i=0;i<n;i++)
int main(){
	ll t;cin >> t;
	ll ax = 0;
	vector<ll> v;
	while (t--) {
		string cmd;cin >> cmd;
		if(cmd == "add"){
			ll x,y;cin >> x >> y;
			loop(i,y)v.push_back(x-ax);
			cout << v.size() << endl;
		}else if(cmd == "del"){
			ll y;cin >> y;
			cout << v[v.size()-1]+ax << endl;
			loop(i, y)v.pop_back();
		}else if(cmd == "adx"){
			ll x;cin >> x;
			ax += x;
		}else {
			ll x;cin >> x;
			ax -= x;
		}
	}
}
