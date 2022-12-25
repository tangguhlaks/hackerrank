#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t;cin >> t;
	while (t--) {
		ll n,m;cin >> n >> m;
		ll arr[m+1]{0},ans[30]={0};
		string s;cin >>s;
		for(ll i=1;i<=m;i++)cin >> arr[i];
		sort(arr,arr+m+1);
		for(ll i=0;i<m;i++){
			for(ll j=arr[i];j<arr[i+1];j++){
				ans[s[j]-'a'] +=m-i;
			}
		}
		for(ll i=0;i<n;i++){
			ans[s[i]-'a']++;
		}
		for(ll i=0;i<26;i++){
			cout << ans[i];
			if(i!=25)cout << " ";
		}
		cout << endl;
	}
}
