#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define len length()

int main(){
	string s;cin >> s;
	ll t; cin >> t;
	ll w = s.find("*");
	string kanan=s.substr(0,w),kiri=s.substr(w+1,s.len - w -1);
	if (s == "*") {
		while(t--){
			string temp;cin >> temp;
			cout << temp << endl;
		}
	}else{
		while(t--){
			string temp;cin >> temp;
			string kanan2=temp.substr(0,w);	
			if (kanan.len > kanan2.len)continue;
			string kiri2 = temp.substr(w,temp.length());
			if (kiri.len > kiri2.len)continue;
			string kiri3 =kiri2.substr(kiri2.len - kiri.len,kiri2.len);
			if(kanan == kanan2 && kiri == kiri3)cout << temp << endl;
		}
	}
}
