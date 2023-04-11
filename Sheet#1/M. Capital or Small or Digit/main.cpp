#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	char x;
	cin >> x;
	if (x >= 48 && x < 65)
		cout << "IS DIGIT\n";
	else if (x >= 65 && x < 97) {
		cout << "ALPHA\n";
		cout << "IS CAPITAL\n";
	}
	else {
		cout << "ALPHA\n";
		cout << "IS SMALL\n";
	}
	return 0;
}
