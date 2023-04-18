#include <iostream>
using namespace std;
int main() {
	int n, a, b;
	cin >> n >> a >> b;
	long long sum = 0;
	for (size_t i = 1; i <= n; i++)
	{
		if (i/10==0)
		{
			if (i>=a&&i<=b)
			{
				sum += i;
			}
		}
		else
		{
			int x = i;
			long long mysum = 0;
			while (x)
			{
				int d = x % 10;
				mysum += d;
				x /= 10;
			}
			if (mysum >= a && mysum <= b)
				sum += i;
		}
	}
	cout << sum << endl;
	return 0;
}
