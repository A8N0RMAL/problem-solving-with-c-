#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int prime(int n) {
	int x = n / 2;
	for (size_t i = 2; i <= x; i++)
	{
		if (n % i == 0)
			return -1;
	}
	return n;
}
int main() {
	int c;
	cin >> c;
	for (size_t i = 2; i <= c; i++)
	{
		int result = prime(i);
		if (result != -1)
			cout << result << " ";
	}
	return 0;
}
