#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	int size = s.size();
	char x[size];
	int c = 0;
	for (int i = size-1; i >= 0; i--)
	{
		x[c] = s[i];
		c++;
	}
	stringstream s1;
	stringstream s2;
	int n1, n2;
	s1 << s;
	s1 >> n1;
	s2 << x;
	s2 >> n2;
	cout << n2 << endl;
	if (n1 == n2)
		cout << "YES\n";
	else
		cout << "NO\n";
	return 0;
}
