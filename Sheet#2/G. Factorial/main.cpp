#include <iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int x;
		cin >> x;
		long long s = 1;
		for (size_t i = x; i >= 1; i--)
		{
			s *= i;
		}
		cout << s << endl;
	}
	return 0;
}
