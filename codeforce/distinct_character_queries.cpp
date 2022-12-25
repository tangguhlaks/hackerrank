#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int getans(string ss,ll l,ll r){
	vector<char> v;
	for(ll i=l-1;i<r;i++){
		if(!count(v.begin(),v.end(),ss[i])){
			v.pb(ss[i]);
		}
	}
	return v.size();
}
int main(){
	string s;cin >> s;
	ll q;cin >> q;
	while (q--) {
		ll type;cin >> type;
		ll arr[26] = {0};
		if(type == 1){
			ll pos;
			char x;
			cin >> pos >> x;
			s[pos-1] = x;
		}else{
			ll l,r;cin >> l >> r;
			ll ans =0;
			cout << getans(s,l,r) << endl;
		}
	}
}
