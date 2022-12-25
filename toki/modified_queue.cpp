#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t;cin >> t;
	deque<ll> deq;
	bool rev=false;
	while(t--){
		string cmd;cin >> cmd;
		if (cmd == "add") {
			ll x,y;cin >> x >> y;
			if (rev) {
				for(ll i=0;i<y;i++)deq.push_front(x);
				cout << deq.size() << endl;
			}else{
				for(ll i=0;i<y;i++)deq.push_back(x);
				cout << deq.size() << endl;
			}
		}else if(cmd == "del"){
			ll y;cin >> y;
			if(rev){
				cout << deq[deq.size()-1] << endl;
				for(ll i=0;i<y;i++)deq.pop_back();
			}else{
				cout << deq[0] << endl;
				for(ll i=0;i<y;i++)deq.pop_front();
			}
		}else{
			if (rev) {
				rev = false;
			}else {
				rev = true;
			}
		}
	}
}
