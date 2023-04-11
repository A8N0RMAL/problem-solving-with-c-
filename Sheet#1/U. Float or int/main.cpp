#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	double x;
	cin >> x;
	double d = x - (int)x;
	if (x - d == x)
		cout << "int " << (int)x << endl;
	else
		cout << "float " << (int)x << " " << d << endl;
	return 0;
}
