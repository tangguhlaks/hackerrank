#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n,b;cin >> n >> b;
	while(n > 0){
		cout << n <<" : " << b << " = " << round(n/b) << " ,sisa = " << n%b << endl;
		n /= b;
	}
}
