#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main(){
	ll t;cin >> t;
	while(t--){
		ll n;cin >> n;
		vector<ll> v;
		for(ll i=0;i<n;i++){
			ll tmp;cin >> tmp;
			v.pb(tmp);
		}
		sort(v.begin(),v.end());
		bool ans=false;
		for(ll i=n-1;i>0;i--){
			if(v[i] - v[i-1] == 1){
				ans=true;
			}
		}
		if (ans) {
			cout << 2 << endl;
		}else{
			cout << 1 << endl;
		}
	}
}
