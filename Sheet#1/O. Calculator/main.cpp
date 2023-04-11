#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	long long a, b;
	char s;
	cin >> a >> s >> b;
	long long sm = a + b;
	long long mn = a - b;
	long long ml = a * b;
	long long dv = a / b;
	if (s == '+')
		cout << sm << endl;
	else if (s == '-')
		cout << mn << endl;
	else if (s == '*')
		cout << ml << endl;
	else
		cout << dv << endl;
	return 0;
}
