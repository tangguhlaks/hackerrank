#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n;cin >> n;
	vector<ll> arr(n),brr(n);
	for(ll i=0;i<n;i++){
		ll x;cin >> x;
		arr[i] = x;
		brr[i] = x;
	}
	sort(brr.begin(),brr.end());
	ll c=0,cc=0;
	while (c<n) {
		if(arr[c]==brr[cc])cc++;
		c++;
	}
	c--;
	while (c>=0) {
		if(arr[c] == brr[cc])cc++;
		c--;
	}
	if(cc == n){
		cout << "Ya" << endl;
		return 0;
	}
	cc = 0;
	c = n-1;
	while (c>=0) {
		if(arr[c]==brr[cc])cc++;
		c--;
	}
	c++;
	while (c<n) {
		if(arr[c] == brr[cc])cc++;
		c++;
	}
	if (cc==n) {
		cout << "Ya" << endl;
	}else{
		cout << "Tidak" << endl;
	}

}
