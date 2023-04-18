#include <iostream>
using namespace std;
int main() {
	long long n;
	cin >> n;
	if (n <= 1) {
		cout << -1;
		return 0;
	}
	for (size_t i = 2; i <= n; i++)
	{
		if (i % 2 == 0)
			cout << i << endl;
	}
	return 0;
}
