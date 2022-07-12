#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct data{
	string id;
	unsigned ll a,b,c;
};

void solve(){
	ll n,m;cin >> n >> m;
	string f; cin >> f;
	struct data ml[n];
	for(int i=0;i<n;i++){
		cin >> ml[i].id >> ml[i].a >> ml[i].b >> ml[i].c;		
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(j==i)continue;
			if(ml[i].c < ml[j].c)swap(ml[i],ml[j]);
			else if(ml[i].c == ml[j].c){
				if(ml[i].b < ml[j].b)swap(ml[i],ml[j]);
				else if(ml[i].b == ml[j].b){
					if(ml[i].a < ml[j].a)swap(ml[i],ml[j]);
				}
			}
		}
	}
	bool ans= false;
	for(int i=0;i<m;i++){
		if(f==ml[i].id){
			ans = true;
		}
	}
	if(ans){
		cout << "YA" << endl;
	}else{
		cout << "TIDAK" << endl;
	}
	
}
int main(){
	ll t; cin >> t;
	while(t--){
		solve();
	}
}
