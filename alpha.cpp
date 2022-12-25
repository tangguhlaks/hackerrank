#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
	ll n;cin >> n;
	ll arr[n];
	for(ll i=0;i<n;i++){
		cin >> arr[i];
	}
	ll x;cin >>x;
	ll ans = 10000000;
	for(ll i=0;i<n;i++){
		if (x/arr[i] < ans && arr[i]*2 <= x) {
			ans = x/arr[i];
		}
	}
	cout << ans <<endl;

}
