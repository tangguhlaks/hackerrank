#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
	string s; cin >> s;
	ll l = 0,r = s.size() - 1;
	char current = 'a' + s.size()-1;
	cout << current << "\n";
	while(l < r){
		if(s[l] == current){
			l++;
			current--;
			continue;
		} else if(s[r] == current){
			r--;
			current--;
			continue;
		} else{
			cout << "NO\n";
			return;
		}
	}
	if(s[l] == current){
		cout << "YES\n";
	} else{
		cout << "NO\n";
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t; cin >> t;
	while (t--) {
		solve();
	}
	// solve()
}
