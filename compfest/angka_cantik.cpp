#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n,m;cin >> n >> m;
	ll arr[n];
	string s="";
	for(ll i=0;i<n;i++){
		cin >> arr[i];
		s+=to_string(arr[i]);
	}
	cout << s << endl;	
}
