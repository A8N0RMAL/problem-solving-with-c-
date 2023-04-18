#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int n; cin >> n; int c = 0;
		while (n > 0)
		{
			if (n % 2 == 1)
				c++;
			n /= 2;
		}long long s = 0;
		for (size_t i = 0; i < c; i++)
		{
			s += 1 * pow(2, i);
		}
		cout << s << endl;
	}
	return 0;
}
