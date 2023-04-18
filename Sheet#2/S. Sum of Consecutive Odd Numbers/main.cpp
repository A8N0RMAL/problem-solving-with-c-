#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int x, y;
		cin >> x >> y;
		long long s = 0;
		int mn = min(x, y);
		int mx = max(x, y);
		for (size_t i = mn+1; i < mx; i++)
		{
			if (i % 2 != 0)
				s += i;
		}cout << s << endl;
	}
	return 0;
}
