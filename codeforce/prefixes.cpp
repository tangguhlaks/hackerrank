#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n;cin >> n;
	string s;cin >> s;
	ll c=0;
	for(ll i=1;i<s.length();i+=2){
		if(s[i] == 'a' && s[i-1] == 'a'){
			c++;
			s[i] = 'b';
		}
		if(s[i] == 'b' && s[i-1] == 'b'){
			c++;
			s[i] = 'a';
		}
	}
	cout << c << endl << s << endl;
}
