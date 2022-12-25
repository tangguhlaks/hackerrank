#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main(){
	ll n,c;cin >> n >> c;
	ll a[200010];
	ll b[200010];
	ll dp[200010][2];
	for(ll i=1;i<n;i++){
		cin >> a[i];
	}
	for(ll i=1;i<n;i++){
		cin >> b[i];
	}
	dp[0][0] = 0;
	dp[0][1] = c;
	cout << 0 << " ";
	for(ll i=1;i<n;i++){
		dp[i][0] = min(dp[i-1][0]+a[i],dp[i-1][1]+a[i]);
		dp[i][1] = min(dp[i-1][0]+b[i]+c,dp[i-1][1]+b[i]);
		cout << min(dp[i][1],dp[i][0]) << " ";
	}
}

