#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n,k;
	cin >> n >> k;
	ll arr[200000];
	ll dp[200000];
	arr[0] = 0;
	for(ll i=1;i<=n;i++){
		cin >> arr[i];
		dp[i] = dp[i-1] + arr[i];
	}
	ll ans = 100000000000;
	ll ret = -1;
	for(ll i = k;i<= n; i++){
		if(ans > dp[i] - dp[i-k]){
			ans = dp[i] - dp[i-k];
			ret = i -k+1;
		}	
	}
	cout << ret << endl;

}
