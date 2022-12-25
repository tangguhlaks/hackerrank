#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n,k;cin >> n >> k;
	vector<ll> v;
	for(ll i=0;i<n*2;i++){
		ll tm;cin >> tm;
		v.push_back(tm);
	}
	sort(v.begin(),v.end());
	bool flag=true;
	for(ll i=0;i<n*2;i+=2){
		if(abs(v[i+1] - v[i]) > k){
			flag= false;
			break;
		}
	}
	if (flag) {
		cout << "Ya" <<endl;
	}else{
		cout << "Tidak" << endl;
	}
}
