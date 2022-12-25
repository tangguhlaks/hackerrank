#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n;cin >> n;
	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=n;j++){
			if(i == 1 || i == n){
				cout << "*";
			}else if(j==1 || j == i || j==n || j==n-i+1){
				cout << "*";
			}else{
				cout << " ";
			}
		}
		cout << endl;
	}
}
