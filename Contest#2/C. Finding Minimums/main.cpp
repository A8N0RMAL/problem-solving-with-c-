#include <iostream>
using namespace std;
int main() {
	/*int n, k;
	cin >> n >> k;
	int mn;
	int flag = 1; int c = 0;
	for (size_t i = 1; i <= n; i++)
	{
		int val;
		cin >> val;
		if (flag)
		{
			mn = val;
			flag = 0;
		}
		else
		{
			if (val<mn)
				mn = val;
		}
		c++;
		if (c==k||i==n)
		{
			cout << mn << " "; flag = 1;
			c = 0;
		}
	}*/

	int n;
	cin >> n;
	int k;
	cin >> k;
	int mn;
	int f = 1;
	int c = 0;
	for (size_t i = 1; i <= n; i++)
	{
		int val;
		cin >> val;
		if (f)
		{
			mn = val;
			f = 0;
		}
		else
		{
			if (val < mn)
				mn = val;
		}
		c++;
		if (c==k||i==n)
		{
			cout << mn << " ";
			c = 0;
			f = 1;
		}
	}
	return 0;
}
