#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define loop(i,n) for(ll i=0;i<n;i++)

struct alarm{
	ll h,m;
};

int main(){
	ll t; cin >> t;
	while(t--){
		ll n,h,m; cin >> n >> h >> m;
		alarm arr[n];
		ll mmin = INT_MAX;
		loop(i, n){
			cin >> arr[i].h >> arr[i].m;
			ll tmp = 0;
			if (arr[i].h > h) {
				ll t1 = h * 60 + m;
				ll t2 = arr[i].h *60 + arr[i].m;
				tmp = t2 - t1;
			}else if (arr[i].h == h) {
				if (arr[i].m >= m) {
					tmp  = arr[i].m - m;
				}else{
					tmp = 24 * 60 - (m - arr[i].m);
				}
			} else{				
				tmp = 24 *60 - (h*60+m) + arr[i].h *60 +arr[i].m;
			}
			if (tmp < mmin) {
				mmin = tmp;
			}
		}

		cout << mmin/60 << " " << mmin%60 << endl;
	}
}
