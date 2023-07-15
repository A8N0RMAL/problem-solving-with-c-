#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	int x;
	cin >> x;
	if (x == 10||x==20 || x == 30 || x == 40 || x == 50 || x == 60 || x == 70 || x == 80 || x == 90) {
		cout << "YES\n";
		return 0;
	}
	int xa = x % 10;
	x /= 10;
	if (x % xa == 0 || xa % x == 0)
		cout << "YES\n";
	else
		cout << "NO\n";
	return 0;
}
