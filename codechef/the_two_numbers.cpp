#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t;cin >> t;
	while (t--) {
		ll x;cin >> x;
		ll ans = 0;
		for(ll i=1;i<x;i++){
			for(ll j=x-i;j>1;j--){
				if(i+j == x){
					ll tm = lcm(i,j) - gcd(i,j);
					ans = max(tm,ans);
				}
			}
		}
		cout << ans << endl;
	}
}
