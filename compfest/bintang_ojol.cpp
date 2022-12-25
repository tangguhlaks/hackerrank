#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n,m;cin >> n >> m;
	if(n > m*5 || m > n){
		cout << "-1 -1" <<endl;
	}else{
		ll mmin,mmax;
		if(n<=m*4){
			mmin = 0;
			mmax = (n-m)/4;
		}else{
			mmin = n - (m*4);
			mmax = (n-m)/4;
		}
		cout << mmin  << " " << mmax <<endl;
	}
}
