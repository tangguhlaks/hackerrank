#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t;cin >> t;
	while (t--) {
		ll n;cin >> n;
		deque<ll> deq;
		vector<ll> v,vl,vr,vd;
		for(ll i=0;i<n;i++){
			ll tmp;cin >> tmp;
			deq.push_back(tmp);
			v.push_back(tmp);
		}
		sort(v.begin(),v.end());
		for(ll i=0;i<n;i++){
			if(deq[0] != v[i]){
				ll c=0;
				while (deq[0] != v[i]) {
					ll tmp  = deq[0];
					deq.pop_front();
					deq.push_back(tmp);
					c++;
				}
				vl.push_back(i+1);
				vr.push_back(n);
				vd.push_back(c);
				deq.pop_front();
			}else {
				deq.pop_front();
			}
		}

		cout << vl.size() << endl;
		for(ll i=0;i<vl.size();i++)cout << vl[i] << " " << vr[i]  << " "<< vd[i] << endl;
	}
}
