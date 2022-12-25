#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isNumber(double x){
	string sx = to_string(x);
	bool ans = true;
	ll pat;
	for(ll i=0;i<sx.length();i++){
		if(sx[i] == '.'){
			pat = i+1;	
			break;
		}
	}
	for(ll i=pat;i<sx.length();i++){
		if(sx[i] != '0'){
			ans=false;	
			break;
		}
	}
	return ans;
}
int main(){
	ll t;cin >> t;
	ll tot=0;
	ll ans=0;
	while(t--){
		ll x;cin >> x;
		tot++;
		ans+=x;
		//cout << isNumber(double(ans%tot)/tot*2) << endl;
		if (isNumber(double(ans%tot)/tot*2)){
			cout << double(ans)/tot<< endl;
		}else {
			cout << ans/tot << endl;
		}
	}
}
