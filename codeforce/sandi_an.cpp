#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	char arr[26] ={'a','b','c','d','e','f','g','h','i','j','k','l','m',
				  'n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char n;cin >> n;
	ll ans = n-'a'+13;
	if(ans >= 26){
		ans-=26;
	}	
	cout << arr[ans] << endl;
}
	
