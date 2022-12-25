#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t;cin >> t;
	ll n,k;	
	while (t--) {
		cin >> n >> k;
		for(ll i=0;i<n;i++){
			ll t=(i%k);
			cout << char('a'+t);
		}	
		cout << endl;
	}
}
