#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n;cin >> n;
	vector<ll> l,r;
	map<ll,ll> arr;
	map<ll,ll> arx;
	while(n--){
		char cmd;
		ll id; cin >> cmd >> id;
		if(cmd == 'L'){
			arr[id] = 0;
			arx[id] = l.size();
			l.push_back(id);
		}else if(cmd == 'R'){
			arr[id] = 1;
			arx[id] = r.size();
			r.push_back(id);
		}else{	
			if(arr[id]){
				cout << min(r.size()-arx[id]-1,l.size()-arx[id]) << endl;
			}else{
				cout << min(l.size()-arx[id]-1,r.size()-arx[id]) << endl;
			}
		}
	}
}
