#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i,n) for(long long i=0;i<n;i++)

const ll numbers  = 100000001;
ll prime[numbers];
ll res[numbers];

void getPrime(){
	ll c = 0;
	for(ll i=2;i<=numbers;i++){
		if(!prime[i]){
			res[++c] = i;
			for(ll j=i*i;j<=numbers;j+=i){
				prime[j] = 1;
			}
		}
	}	
}

int main(){
	ll t;cin >> t;
	while(t--){
		ll k; cin >> k;
		cout <<  res[k] << endl;
	}
	
}
