#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t;cin >> t;
	while(t--){
		ll a,b;cin >> a >> b;
		ll ans =0;
		if(a>b){
			ans++;
			if((a-b)%2 != 0 ){
				ans++;
			}
		}else if(b>a){
			ans++;
			if((b-a)%2!=1){
				ans++;
			}
		}
		cout << ans <<endl;
	}
}
