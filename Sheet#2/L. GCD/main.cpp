#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	int n1, n2;
	cin >> n1 >> n2;
	int mx = max(n1, n2);
	int mn = min(n1, n2);
	int g;
	for (size_t i = 1; i <= mx; i++)
	{
		if (n1 % i == 0 && n2 % i == 0)
			g = i;
	}
	cout << g << endl;
}
