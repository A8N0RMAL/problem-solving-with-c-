#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	long long x;
	cin >> x;
	int y = x / 1000;
	if (y % 2 == 0)
		cout << "EVEN\n";
	else
		cout << "ODD\n";
	return 0;
}
