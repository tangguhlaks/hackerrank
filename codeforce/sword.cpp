#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n;cin >> n;
	ll arr[n+1];
	ll mx = 0;
	for(ll i=1;i<=n;i++){
		cin >> arr[i];
		mx = max(arr[i],mx);
	}
	ll tot=0;
	for(ll i=1;i<=n;i++){
		arr[i] -= mx;
		tot+= arr[i];
	}
	ll mygcd = arr[1];
	for(ll i=1;i<=n;i++){
		if(arr[i]!=0){
			mygcd = __gcd(arr[i],mygcd);
		}
	}
	cout << abs(tot/mygcd) << " "<< abs(mygcd) << endl;
}
