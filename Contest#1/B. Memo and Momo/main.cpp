#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	long long a, b, c;
	cin >> a >> b >> c;
	if (a % c == 0 && b % c != 0)
		cout << "Memo\n";
	else if (b % c == 0 && a % c != 0)
		cout << "Momo\n";
	else if (b % c == 0 && a % c == 0)
		cout << "Both\n";
	else
		cout << "No One\n";
	return 0;
}
