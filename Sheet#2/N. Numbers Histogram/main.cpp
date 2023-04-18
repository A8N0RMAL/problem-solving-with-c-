#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	char c;
	cin >> c;
	int n;
	cin >> n;
	while (n--)
	{
		int x;
		cin >> x;
		for (size_t i = 0; i < x; i++)
		{
			cout << c;
		}
		cout << endl;
	}
	return 0;
}
