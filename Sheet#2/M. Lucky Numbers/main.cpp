#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	int lk[100000] = { 0 };
	lk[4] = 1;
	lk[7] = 1;
	lk[44] = 1;
	lk[47] = 1;
	lk[77] = 1;
	lk[74] = 1;
	lk[444] = 1;
	lk[477] = 1;
	lk[474] = 1;
	lk[447] = 1;
	lk[777] = 1;
	lk[774] = 1;
	lk[747] = 1;
	lk[774] = 1;
	lk[744] = 1;
	lk[7447] = 1;
	lk[7477] = 1;
	lk[7444] = 1;
	lk[7747] = 1;
	lk[7744] = 1;
	lk[7774] = 1;
	lk[7777] = 1;
	lk[7474] = 1;
	lk[4774] = 1;
	lk[4744] = 1;
	lk[4777] = 1;
	lk[4477] = 1;
	lk[4474] = 1;
	lk[4447] = 1;
	lk[4444] = 1;
	lk[4747] = 1;
	int n1, n2;
	cin >> n1 >> n2;
	int f = 0;
	for (size_t i = n1; i <= n2; i++)
	{
		if (lk[i]==1)
		{
			cout << i << " ";
			f = 1;
		}
	}
	if (f == 0)
		cout << -1 << endl;
	return 0;
}
