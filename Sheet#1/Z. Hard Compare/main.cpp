#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	double a, b, c, d;
	cin >> a >> b >> c >> d;
	double aa = b * log(a);
	double cc = d * log(c);
	if (aa > cc)
		cout << "YES\n";
	else
		cout << "NO\n";
	return 0;
}
