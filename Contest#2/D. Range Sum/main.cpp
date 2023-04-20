#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--)
	{
		long long l, r; cin >> l >> r;
		long long mn = min(l, r);
		long long mx = max(l, r);
		mn--;
		// u need l in sum so do l--
		long long s1 = mn * (mn + 1) / 2;	// sum from 0 to l
		long long s2 = mx * (mx + 1) / 2;	// sum from 0 to r
		// to get sum from l to r	--->	s2-s1
		cout << s2 - s1 << endl;
	}
	return 0;
}
