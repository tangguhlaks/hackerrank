#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
	ll t;cin >> t;
	while(t--){
		ll n;cin >> n;
		string s;cin >> s;
		map<char,ll> m;
		ll ans=0;
		for(ll i=0;i<n;i++){
			m[s[i]]++;
		}
		for(auto i:m){
			ans = max(ans,i.second);
		}
		cout << n - ans<<endl;
	}
}
