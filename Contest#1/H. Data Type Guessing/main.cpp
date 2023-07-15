#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	double n, k, a;
	cin >> n >> k >> a;
	double x = n * k / a;
	long long y = x;
	double z = x - y;
	if (z>0 )
		cout << "double\n";
	else if (y<= 2147483647)
		cout << "int\n";
	else
		cout << "long long\n";
	return 0;
}
