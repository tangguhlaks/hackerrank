#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct bag{
	ll w,h;
};
int main(){
	ll n,k;cin >> n >> k;
	vector<ll> vec;
	bag arr[k];
	for(ll i=0;i<k;i++){
		ll w,h;cin >> w >> h;
		arr[i].h = h;
		arr[i].w = w;
	}
	cout << endl;
	string anss = "";
	ll tnn =0;
	ll myhh =0;
	ll i = 0;
	while(i <k){
		ll j = i;
		ll myh = arr[i].h;
		ll tn = arr[i].w;
		vec.push_back(i);
		while (j < k) {
			if (j!=i && tn + arr[j].w <= n) {
				myh += arr[j].h;
				tn += arr[j].w;
				vec.push_back(j);
			}
			j++;
		}
		if(myh > myhh){
			myhh = myh;
		}
		i++;
	}
	for(auto &x:vec)cout << x <<endl;
	cout << myhh << endl;

}
