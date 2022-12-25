#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
 
ll findlcm(ll arr[], ll n)
{
    // Initialize result
    ll ans = arr[0];
 
    // ans contains LCM of arr[0], ..arr[i]
    // after i'th iteration,
    for (int i = 1; i < n; i++)
        ans = (((arr[i] * ans)) /
                (gcd(arr[i], ans)));
 
    return ans;
}
int main(){
	ll n,m;cin >> n >> m;
	ll arr[n];
	for(ll i=0;i<n;i++){cin>>arr[i];}
	sort(arr,arr+n);
	ll mylcm = findlcm(arr, n);	
	while (mylcm < target) {
		mylcm*=2;
	}
	cout << mylcm;
	for(ll i=mylcm;i>=0;i--){
		ll cc =0;
		for(ll j=0;j<n;j++){
			cc += i/arr[i];
			cout << cc <<endl;
		}
	}

}
