#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n;cin >> n;
	ll ans=0;
	for(ll a=0;a<=n;a++){
		for(ll b=0;b<=n;b++){
			for(ll c=0;c<=n;c++){
				if(n == a+b+c)ans++;
			}
		}
	}
	cout << ans << endl;
}
