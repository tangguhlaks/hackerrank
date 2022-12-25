#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	string s;cin >> s;
	char arr[] = {'A','B','C','D','E','F'};
	while(s.length() %4 !=0){
		s = '0'+s;
	}
	for(ll i=0;i<s.length();i+=4){
		string x = s.substr(i,4);
		ll ans=0;
		if(x[0] == '1')ans+=8;
		if(x[1] == '1')ans+=4;
		if(x[2] == '1')ans+=2;
		if(x[3] == '1')ans+=1;
		
		if(ans < 10){
			cout << x << " = " << ans << endl;
		}else{
			cout << x << " = " << arr[ans%9-1] << endl;
		}
	}

}
