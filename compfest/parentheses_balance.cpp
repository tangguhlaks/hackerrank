#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n;cin >> n;
	while(n--){
		string s;cin >> s;
		ll x1=0,x2=0,y1=0,y2=0;
		for(ll i=0;i<s.length();i++){
			if(s[i] == '('){
				x1++;
			}else if(s[i] == ')'){
				x2++;
			}else if(s[i] == '['){
				y1++;
			}else{
				y2++;
			}
		}
		if ( x1 == x2  || y1 == y2){
			cout << "ya" << endl;
		}else{
			cout << "tidak" << endl;
		}
	}
}
