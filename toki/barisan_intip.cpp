#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i,n) for(ll i=0;i<n;i++)
int main(){
	ll n;cin >> n;
	ll arr[n];
	ll ans=0;
	loop(i, n)cin >> arr[i];
	ll idx = 0;
	loop(i, n){
		ll tmp=idx;
		ll j=i;
		while(j>=idx){
			if(arr[j] <= arr[i]){
				tmp++;
				j--;
			}else{
				break;
			}
		}
		if (arr[idx] < arr[i]) {
			idx = i;
		}
		ans+=tmp;
	}

	cout << ans << endl;
}
