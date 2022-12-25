#include <bits/stdc++.h>
using namespace std;
#define ll long long
// Main function.
int main()
{
    // Two numbers for which we want binary representation.
	ll n;cin >> n;

	
	bitset<20> b1(n);
	
	cout << "20-bit Binary of " << n  << " : ";
	cout << b1 << endl;
}
