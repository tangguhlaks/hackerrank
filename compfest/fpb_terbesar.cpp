#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll dp[1000005];
int main(){
	ll t;cin >> t;
	while (t--) {
		ll n,m;cin >> n >> m;
		
		for(ll i=1;i<=1000000;i++)dp[i]=0;
		for(ll i=1;i<=n;i++){
			ll tmp;cin >> tmp;
			dp[tmp]++;
		}
		ll ans;
		for(ll i=1000000;i>=1;i--){
			ll count = 0;
			for(ll j=i;j<=1000000;j+=i){
				count+=dp[j];
			}
			if (count >= m) {
				ans = i;
				break;
			}
		}
		cout << ans << endl;
	}
}
