#include <iostream>
using namespace std;
int main() {
	int l1, l2, r1, r2;
	cin >> l1 >> r1 >> l2 >> r2;
	int l, r;
	if ((l2 < l1 && r2 < l1) || (l2 > r1 && l2 > r1))
		cout << -1 << endl;
	else
	{
		if (l1 > l2)
			l = l1;
		else
			l = l2;
		if (r1 > r2)
			r = r2;
		else
			r = r1;
		cout << l << " " << r << endl;
	}
	return 0;
}
