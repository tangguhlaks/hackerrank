#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n,m,k;cin >> n >> m >> k;
	ll arr[n+1];
	ll box[m+1]= {0};
	for(ll i=1;i<=n;i++){
		cin >> arr[i];
	}
	ll ans =0;
	for(ll i=n;i>0;i--){
		if(arr[i]+box[m] > k){
			m--;
			if(!m)break;
			box[m] += arr[i];
			ans++;
		}else{
			box[m]+=arr[i];
			ans++;
		}
	}
	cout << ans << endl;
}
