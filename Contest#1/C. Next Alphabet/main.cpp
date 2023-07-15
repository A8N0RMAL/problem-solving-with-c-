#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	char s;
	cin >> s;
	char x = s + 1;
	if (s == 'z')
		cout << 'a' << endl;
	else
		cout << x << endl;
	return 0;
}
