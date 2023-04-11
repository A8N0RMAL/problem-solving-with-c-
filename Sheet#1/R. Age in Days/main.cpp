#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	long long x;
	cin >> x;
	int y = x / 365;
	x -= (y * 365);
	int m = x / 30;
	x -= (m * 30);
	int d = x;
	cout << y << " years\n" << m << " months\n" << d << " days\n";
	return 0;
}
