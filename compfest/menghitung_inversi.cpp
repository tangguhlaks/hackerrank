#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n;cin >> n;
	ll arr[n];
	for(ll i=0;i<n;i++){
		cin >> arr[i];
	}
	ll ans=0;
	for(ll i=0;i<n-1;i++){
		for(ll j=i+1;j<n;j++){
			if(arr[i] > arr[j]){
				ans++;
			}
		}
	}
	cout << ans << endl;
}
