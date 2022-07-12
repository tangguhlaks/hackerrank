#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i,j,n,m) for(int i=0,j=0;i<n && j<m;)

int main(){
	string a,b;cin >> a >> b;
	int al =a.length();
	int bl =b.length();
	ll count = 0;
	if (al-bl == 1){
		loop(i,j,al,bl){
			if(a[i]!=b[j]){
				count++;
				i++;
			}else{
				j++;
				i++;
			}
		};
	}else{
		cout << "Wah, tidak bisa :(";
		return 0;
	}

	if (count <= 1) {
		cout  << "Tentu saja bisa!";
	}else {
		cout << "Wah, tidak bisa :(";
	}
	return 0;
}
