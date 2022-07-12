
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
int main(){
	vector<ll> arr;
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll c = 1;
	arr.push_back(1);
	for(ll i =2;i<1000000;i++){
		arr.push_back((ll) pow(i,2));
		arr.push_back((ll) pow(i,3));
	}
	sort(arr.begin(),arr.end());
 
	ll t;cin >> t;
	while(t--){
		ll x;cin >>x;
	       	ll ans=0;	
		for(ll i=0;i<=x;i++){
			if(arr[i] <= x){
				ans++;
				if(arr[i] == arr[i+1])ans--;
			}else{
				break;
			}
		}
		cout << ans <<endl;
	}
}
