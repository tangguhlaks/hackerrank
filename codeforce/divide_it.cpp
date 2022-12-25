#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t;cin >> t;
	while (t--) {
		ll n,c;cin >> n;
		c=0;
		while(n>1){
			if(n%5==0){
				n=4*n/5;
				c++;
			}else if(n%3==0){
				n=2*n/3;
				c++;
			}else if (n%2==0) {
				n=n/2;
				c++;
			}else {
				break;
			}	
		}
		if (n == 1 )cout << c << endl;
		else cout << "-1" << endl;
	}
}
