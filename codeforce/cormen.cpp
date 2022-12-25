#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n,k;cin >> n >> k;
	ll dp[1000] = {0};
	ll arr[1000];
	for(ll i=0;i<n;i++){
		cin >> arr[i];
	}
	dp[0] = arr[0];
	ll c=0;
	for(ll i=1;i<n;i++){
		dp[i] = max(k-dp[i-1],arr[i]);
		c += max((ll)0,dp[i] - arr[i]);
	}
	cout << c <<endl;
	for(int i=0;i<n;i++){
		cout << dp[i] << endl;
	}
}
