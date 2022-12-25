#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n,x;cin >> n >> x;
	vector<ll> v;
	ll a=x;
	while(n--){
		ll m;cin >> m;
		if(abs(x-m) < a){a=abs(x-m);}
		v.push_back(m);	
	}	
	sort(v.begin(),v.end());
	for(auto i:v){
		if(abs(x-i) == a)cout << i << endl;
	}

}
