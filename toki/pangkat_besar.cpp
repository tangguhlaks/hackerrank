#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define len length()
int main(){
	ll a,b;cin >> a >> b;
	bool six = false;
	ll x = pow(a,b); 
	if(x > 999999 || x < -999999){
		six=true;
	}

	if(six){
		string s=to_string(x);
		for(ll i=s.len-6;i<=s.len;i++){
			cout << s[i]; 
		}
	}else {
		cout << x << endl;
	}

}
