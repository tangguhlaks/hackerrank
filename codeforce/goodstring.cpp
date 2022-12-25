#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n;cin >> n;
	string s,ans="";cin >> s;
	ll c=0;
	ll m=0;
	for(ll i=0;i<n;i++){
		if(i%2==m){
			if(i+1<n&&s[i]==s[i+1]){
				c++;
				if(m==1){
					m=0;
				}else{
					m=1;
				}
			}else if(i==n-1){
				c++;
			}else{
				ans+=s[i];
			}
		}else{
			ans+=s[i];
		}
	}
	cout << c << endl;
	cout <<  ans << endl;
}
