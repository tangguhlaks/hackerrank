#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n;cin >> n;
	while(n--){	
		ll m;cin >> m;
		ll x=0,y=0;
		ll t=0,u=0,b=0,s=0;
		ll ii=1;
		for(ll i=1;i<=m;i+=4){
			ll tmp=i;
			while (tmp > 0 && ii <= m) {
				t++;
				tmp--;
				ii++;
			}
		}
		for(ll i=2;i<=m;i+=4){
			ll tmp=i;
			while (tmp > 0 && ii <= m) {
				u++;
				tmp--;
				ii++;
			}
		}
		for(ll i=3;i<=m;i+=4){
			ll tmp=i;
			while (tmp > 0 && ii <= m) {
				b++;
				tmp--;
				ii++;
			}

		}
		for(ll i=4;i<=m;i+=4){
			ll tmp=i;
			while (tmp > 0 && ii <= m) {
				s++;
				tmp--;
				ii++;
			}

		}
		x =  t-b;
		y = u-s;
		cout << x << " " << y << endl;
	}
}
