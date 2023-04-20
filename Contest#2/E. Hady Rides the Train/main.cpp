#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	long long n;
	cin >> n;
	long long r = n / 4, c;
	if (r % 2 == 0)
		c = n % 4;
	else
		c = 3 - (n % 4);
	cout << r << " " << c << endl;
	return 0;
}
