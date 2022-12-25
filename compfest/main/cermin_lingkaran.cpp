#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll mod=998244353;
ll a,b,c;
ll factorial(ll n){
	ll fact = 1, i;
	for(ll i=1; i<=n; i++)fact = fact * i;
	return fact;
}
ll kombinasi(ll n,ll r){
	ll f1 = factorial(n); 
	ll f2 = factorial(r); 
	ll f3 = factorial(n-r);
	return (f1/(f2*f3));
}
bool cek(ll x,ll y,ll z){
	bool ans;
	if (x >= y && x >= z)
		{
			a = x;
			b = y;
			c = z;
		} else if (y >= x && y >= z)
		{
			a = y;
			b = x;
			c = z;
		} else
		{
			a = z;
			b = x;
			c = y;
		}
		ans = a*a != (b*b + c*c);

	return ans;
}


int main(){
	ll n,m;cin >> n >> m;
	ll arr[n+1];
	ll brr[m+1];
	for(ll i=1;i<=n;i++){
		cin >> arr[i];
	}
	ll comb = 0;
	for(ll i=1;i<=m;i++){
		brr[i] = kombinasi(n,i);
	}
	for(ll cm=1;cm<=m;cm++){
		for(ll i=1;i<=brr[cm]*m;i++){
			for(ll j=i;j<=n;j+=cm){
				cout << cm  << " ";
			}
			cout << endl;
		}
	}
	cout << comb << endl;

}
