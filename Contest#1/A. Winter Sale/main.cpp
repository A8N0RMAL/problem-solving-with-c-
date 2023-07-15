#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main() {
	double a, b, c;
	cin >> a >> b;
	// a = 15 b = 20
	double d = 100 - a;
	double f = b / d;
	c = f * a + b;
	cout << fixed << setprecision(2) << c << endl;
	return 0;
}
