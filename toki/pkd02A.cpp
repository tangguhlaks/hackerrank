#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
	ll a,b,c,d;cin >> a >> b >> c >> d;
	ll x = lcm(b,d)/b*a + lcm(b,d)/d*c;
	ll y = lcm(b,d);
	cout << x/gcd(x,y) << " " << y/gcd(x,y);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	solve();
}
