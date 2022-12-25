#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n,d;cin >> n >> d;
	string s="";
	ll a=1,b=2;
	for(ll i=n-1;i>0;i--){
		cout << "| " << i+1 << " | " << pow(2,i) << " |" << endl;
	}
	cout << "| " << 1 << " | " << 1 << " |" << endl;
	for(ll i=n-1;i>0;i--){
		if(d-pow(2,i) >= 0){
			cout << " -> " << d << " - " << pow(2,i) << " = " <<  d-pow(2,i)  << " = 1"<< endl;
			d -= pow(2,i);
			s = s+"1";
		}else{
			cout << " -> " << d << " - " << pow(2,i) << " = " <<  "-  = 0 " << endl;
			s = s+"0";
		}
	}
	if(d == 1){
		cout << " -> " << 1 << " - " << 1 << " = " <<  0 << "  = 1"<< endl;
		s = s+"1";
	}else{ 
		cout << " -> " << 0 << " - " << 1 << " = " <<  0 << "  = 0"<< endl;
		s = s+"0";
	}

	cout << endl << s << endl;
}
