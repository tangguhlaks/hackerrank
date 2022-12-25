#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i,n) for(ll i=0;i<n;i++)

struct lap{
	ll p,q;
};
int main(){
	ll n;cin >> n;
	lap arr[n];
	loop(i,n) {
		ll p,q; cin >> p >> q;
		arr[i].p = p;
		arr[i].q = q;
	}
	for(ll i=n-1;i>0;i--){
		if (arr[i].q > arr[i-1].q) {
			lap tmp = arr[i];
			arr[i] = arr[i-1];
			arr[i-1] = tmp;
		}
	};

	loop(i, n){
		if (arr[i].p < arr[i+1].p && arr[i].q > arr[i+1].q) {
			cout << "Happy Alex" << endl;
			return 0;
		}
	}
	cout << "Poor Alex" << endl;
}

