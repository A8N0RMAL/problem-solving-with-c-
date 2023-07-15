#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	long long e, m, b;
	cin >> e >> m >> b;
	long long c = 0;
	if (e == 0)
		cout << 0;
	else
	{
		if ((m >= e && m >= b) || (m >= e && m < b) || (m < e && m >= b))
		{
			c = min(e, b);
			cout << c << endl;
		}
		else if ((m<e&&m<b))
		{
			c = m;
			e -= m;
			b -= m;
			c += min(e / 2, b);
			cout << c;
		}
	}
	return 0;
}
