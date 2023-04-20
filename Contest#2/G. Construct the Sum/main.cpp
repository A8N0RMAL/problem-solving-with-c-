#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int res[1000005];
int main() {
	long long counter;
	cin >> counter;
	long long cou = 0;
	for (int i = 0; i < counter; i++)
	{
		long long n1, n2;
		cin >> n1 >> n2;
		if (n1 * (n1 + 1) / 2 < n2)
			cout << -1;
		else {
			long long sum = 0;
			for (int z = n1; z >= 1; z--)
			{
				if (sum + z <= n2) {
					sum += z;
					res[cou] = z;
					cou++;
				}
				if (sum == n2) {
					break;
				}
			}
		}
		for (int x = 0; x < cou; x++)
		{
			cout << res[x] << " ";
		}
		cout << endl;
		cou = 0;
	}
	return 0;
}
