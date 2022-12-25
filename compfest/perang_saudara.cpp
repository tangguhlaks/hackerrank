#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool arr[1005][1005];
int main(){
	ll n,m;cin >> n >> m;
	for(ll i=1;i<=m;i++){
		ll a,b;cin >> a >>b;
		arr[a][b] = true;
		arr[b][a] = true;
	}
	ll q;cin >>q;
	while (q--) {
		ll a,b;cin >> a >> b;
		ll ans=0;
		for(ll i=1;i<=n;i++){
			if(arr[a][i] == true && arr[b][i] == true){
				ans++;
			}	
		}
		cout << ans <<endl;
	}
}
