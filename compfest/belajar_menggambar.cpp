#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[100005];

void solve(){
    int n,m;
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int a,b;
        cin >> a >> b;
        arr[a] ++;
        arr[b] ++;
    }

    int gen = 0, ganj = 0;
    for(int i = 1; i <= n; i++){
        if(arr[i] % 2 == 0) gen++;
        else ganj++;
    }

    if(gen == n) cout << "Tipe A" << endl;
    else if(ganj == 2) cout << "Tipe B" << endl;
    else cout << "Tipe C" << endl;
}

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // int t;
    // cin >> t;
    // while(t--){
    //     solve();
    // }

    solve();
}
