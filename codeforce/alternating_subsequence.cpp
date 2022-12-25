#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
 
const ll mod = 1000000007;
const ll INF = 10000000000;
 
void solve() {
    ll n; cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    bool neg;
    ll cnt = 0;
    if(v[0] < 0) neg = true;
    else neg = false;
    vector<ll> dp(n+1,-INF);
    dp[0] = v[0];
    for(int i = 1; i < n; i++){
        if(v[i] < 0 && neg){
            dp[cnt] = max(dp[cnt], v[i]);
        } else if(v[i] >= 0 && !neg){
            dp[cnt] = max(dp[cnt], v[i]); 
        } else{
            cnt++;
            neg = !neg;
            i--;
        }
    }
    ll res = 0;
    for(int i = 0; i <= cnt; i++){
        res += dp[i];
    }
    cout << res << "\n";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t; cin >> t;
    while(t--){
        solve();
    }
    // solve();
    return 0;
}
