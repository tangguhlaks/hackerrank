#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll  n,m,d;cin >> n >> m >> d;
	ll arr[m];
	for(ll i=0;i<m;i++){
		cin >> arr[i];	
	}
	ll x=0;
	bool ans = false;
	ll arn[n] = {0};
	for(ll i=d;i<=n+1;i++){
		if(x+d >= n+1 || x+1 >=n+1){
			ans = true;	
		}
	}

}
