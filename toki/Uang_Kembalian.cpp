#include<bits/stdc++.h>
using namespace std;
int arr[600];
int dp[50010];


int main (){
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> arr[i];
	}
	
	int k;
	cin >> k;
	dp[0] = 0;
	
	for(int i = 1; i <= k; i++){
		dp[i] = 100000;
		
		for(int j = 1; j <= n; j++){
			if(i >= arr[j]){
				dp[i] = min(dp[i],dp[i - arr[j]]+1);
			}
		}
	}
	if(dp[k]>=100000) dp[k] = -1;
	cout << dp[k] << endl;
}