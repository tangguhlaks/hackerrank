#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t;cin >> t;
	while(t--){
		string s;cin >> s;
		ll a=0,b=0,c=0;
		for(ll i=0;i<s.length();i++){
			if(s[i] == 'A')a++;
			if(s[i] == 'B')b++;
			if(s[i] == 'C')c++;
		}
		string ans = "NO";
		if (b == a+c) {
			ans = "YES";
		}
		cout  << ans << endl;

	}
}
