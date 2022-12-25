#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t;cin >>t;
	char ab[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	while(t--){
		ll n;cin >>n;
		string s;cin >> s;
		for(ll i=0;i<n;i++){
			if(s[i] == '0'){
				continue;
			}
			char ss=s[i+2];
			string s3="";
			if(ss == '0' && i+2 < n){
				if(i+2+1<n && s[i+2+1] == '0'){					
					s3 = s.substr(i,1);
				}else{
					s3 = s.substr(i,2);
					i++;
				}
			}else{
				s3 = s.substr(i,1);
			}
			int x = stoi(s3);
			cout << ab[x-1];
		}
		cout << endl;
	}
}
