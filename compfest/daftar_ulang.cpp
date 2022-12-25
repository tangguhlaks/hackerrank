#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n,q;cin >> n >> q;
	map<string,ll> m;
	for(ll i=1;i<=n;i++){
		string k;cin >> k;
		m[k] = i;
	}
	for(ll i=0;i<q;i++){
		string k;cin >> k;
		if(m.find(k) != m.end()){
			cout << m[k] << endl;
		}else{
			cout << -1 << endl;
		}
	}
}
