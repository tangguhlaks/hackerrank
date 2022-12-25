#include <bits/stdc++.h>
using namespace std;
#define	ll long long
#define loop(i,n) for(ll i=0;i<n;i++)

int main(){
	ll t;cin >> t;
	while(t--){
		ll n;cin >> n;
		vector<ll> v;
		ll ans=0;
		loop(i, n){
			ll tmp;cin >> tmp;
			v.push_back(tmp);
		};
		
		set<ll> st;
		ll i;
		for(i=n-1;i>=0;i--){
			if (st.find(v[i]) != st.end())break;
			st.insert(v[i]);
		}

		cout << i+1 << endl;
	}
}
