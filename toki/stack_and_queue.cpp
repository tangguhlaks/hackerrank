#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll n;cin >> n;
	deque<ll> arr;
	while (n--) {
		string command;cin >> command;
		if (command == "push_back") {
			ll nn;cin >> nn;
			arr.push_back(nn);
		}else if(command == "push_front"){
			ll nn;cin>>nn;
			arr.push_front(nn);
		}else if (command == "pop_back") {
			arr.pop_back();
		}else{
			arr.pop_front();
		}	
	}
	for(ll i=0;i<arr.size();i++){
		cout << arr[i] << endl;
	}
}
