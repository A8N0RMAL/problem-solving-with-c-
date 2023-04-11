#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	char c;
	cin >> c;
	if (c >= 65 && c < 97)
		cout << (char)(c + 32) << endl;
	else
		cout << (char)(c - 32) << endl;
	return 0;
}
