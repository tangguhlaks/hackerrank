#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t;cin >> t;
	map<string,ll> m;
	while(t--){
		string cmd,x;cin >> cmd >> x;
		if(cmd == "DAFTAR"){
			if(m.find(x) != m.end()){
				m[x] = m[x] + 1;
			}else{
				m[x] = 1;
			}
		}else{
			if(m.find(x) != m.end()){
				cout << m[x] << endl;
			}else{
				cout << 0 << endl;
			}

		}
	}
}
