#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	int a, b;
	char s;
	cin >> a >> s >> b;
	if (a > b && s == '>')
		cout << "Right\n";
	else if (a < b && s == '<')
		cout << "Right\n";
	else if (a == b && s == '=')
		cout << "Right\n";
	else
		cout << "Wrong\n";
	return 0;
}
