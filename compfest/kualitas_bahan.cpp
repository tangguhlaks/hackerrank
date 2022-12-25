#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<ll,ll> arr[100005];

int main(){
	ll n;cin >> n;
	ll ans=0;
	for(ll i=1;i<=n;i++){
		cin >> arr[i].second;
	}
	for(ll i=1;i<=n;i++){
		cin >> arr[i].first;
	}
	sort(arr+1,arr+n+1);
	for(ll i=n;i>=1;i--){
		ans+=arr[i].second -(n-i)*arr[i].first;
	}
	cout << ans << endl;
}
