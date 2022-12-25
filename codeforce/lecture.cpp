#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n,m;cin >> n >> m;
	map<string,string> m1;
	map<string,string> m2;
	ll arr2[m];
	for(ll i=0;i<m;i++){
		string a,b;cin >> a >> b;
		m1[a] = b;
		m2[b] = a;
	}
	string s;
	for(ll i=0;i<n;i++){
		 cin >> s;
		if (m1.find(s) != m1.end()) {
			if (m1[s].size() < s.size()) {
				cout << m1[s] <<" ";
			}else{
				cout << s << " ";
			}
		}else{
			if(m2[s].size() < s.size()){
				cout << m2[s] << " ";
			}else{
				cout << s << " ";
			}
		}
		
	}
}
