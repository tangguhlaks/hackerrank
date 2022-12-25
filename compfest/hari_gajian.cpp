#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
int main(){
	ll n;cin >> n;
	ll arr[3] = {1,2,5};
	vector<pair<ll,ll>> v;
	ll y;
	while(n > 0){
		ll x=n;
		ll ten=0;
		while (x>=10) {
			x/=10;
			ten++;
		}
		for(ll i = 0; i < 3; i++){
            y = (ll)pow(10,ten)*arr[i];
            if(y <= n){
                v.push_back(mp(y, n/y));
                n -= n/y*y;
                break;
            }
        }
	}
	cout << v.size() << endl;
	for(auto i:v)cout << i.first <<" "<<i.second<<endl;
}
