#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n;cin >>n ;
	while (n--) {
		ll L,v,l,r;cin >> L >> v >> l >> r;
		ll ans= (L/v) - (r/v - (l-1)/v);
		cout << ans <<endl;
	}
}
