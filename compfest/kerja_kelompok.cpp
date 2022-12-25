#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair

int main(){
	ll n;cin >> n;
	priority_queue<ll> mq;
	for(ll i=0;i<n;i++){
		ll tmp;cin >> tmp;
		mq.push(tmp);
	}
	while (mq.size() >= 2) {
		ll a = mq.top();
		mq.pop();
		ll b=mq.top();
		mq.pop();
		ll x=a-b;
		if(x > 0)mq.push(x);
	}
	if(mq.empty()){
		cout << 0 << endl;
	}else{
		cout << mq.top() <<endl;
	}
}
