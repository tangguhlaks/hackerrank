#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t;cin >> t;
	while(t--){
		ll a,b,c;cin >>a >>b>>c;
		ll e1 = abs(b-c)+abs(c-1);
		ll e2 = abs(a-1);
		if(e1>e2){
			cout << 1 <<endl;
		}else if(e1<e2){
			cout << 2 <<endl;
		}else{
			cout << 3 <<endl;
		}
	}
}
