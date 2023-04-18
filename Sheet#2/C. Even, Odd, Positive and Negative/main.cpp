#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int e = 0, o = 0, p = 0, ne = 0;
	while (n--)
	{
		int x;
		cin >> x;
		if (x % 2 == 0)
			e++;
		if (x % 2 != 0)
			o++;
		if (x > 0)
			p++;
		if (x < 0)
			ne++;
	}
	cout << "Even: " << e << endl << "Odd: " << o << endl << "Positive: " << p << endl << "Negative: " << ne << endl;
	return 0;
}
