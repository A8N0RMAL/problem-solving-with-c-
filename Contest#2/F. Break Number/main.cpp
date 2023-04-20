#include <iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	long long s = 0;
	while (t--)
	{
		long long c = 0;
		long long n;
		cin >> n;
		// n = 7	7 % 2 = 1 != 0
		if (n % 2 != 0)
			c = 0;
		// n = 10	10 % 2 = 0	10 / 2 = 5	5 % 2 = 1 != 0
		else
		{
			while (n > 0)
			{
				if (n % 2 != 0)
					break;
				else
					c++, n /= 2;
			}
		}
		if (s < c)
			s = c;
	}
	cout << s << endl;
	return 0;
}
