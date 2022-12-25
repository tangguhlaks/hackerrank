
#include <bits/stdc++.h>
using namespace std;
#define ll long long

 int main(){
	ll n;cin >> n;
	ll arr[n+1];
	for(ll i=1;i<=n;i++)cin >>arr[i];

	ll q;cin >> q;
	while (q--) {
		ll jq;cin >> jq;
		if(jq == 1){
			ll k,w;cin >> k >> w;
			arr[k] = w;
		}else if (jq==2) {
			ll k;cin >> k;
			cout << arr[k] << endl;
		}else {
			ll l,r; cin >> l >> r;
			for(ll i=1;i<=n;i++){
				if(arr[i] >= l && arr[i] <= r){
				 if((ll)abs(arr[i]-l-1) < (ll)abs(arr[i]-r+1)){
					arr[i]=l-1;
				 }else{
					arr[i] = r+1;
				 }
				}
			}
		}
	}
 }

