#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
int main() {
	//int t = 3;
	int n, m;
	while (cin >> n >> m)
	{
		int mx = max(n, m);
		int mn = min(m, n);
		long long s = 0;
		int x = 0;
		if (n <= 0 || m <= 0)
		{
			return 0;
			//continue;
			// continue statement helps in skipping a particular iteration of the loop. It doesn’t stop the complete execution of the loop; it just skips that particular iteration and then continues with the next iteration.
		}
		else
		{
			/*for (size_t i = mn; i <= mx; i++)
			{
				cout << i << " ";
				s += i;
			}
			cout << "sum =" << s << endl;*/
			for (size_t i = mn; i <= mx; i++)
			{
				cout << i << " ";
				x++;
			}
			long long z = (ceil(x) / 2) * (mn + mx);
			cout << "sum =" << z << endl;
		}
	}
	return 0;
}
