#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int x = n / 2;
	cout << 1 << "\n";
	for (size_t i = 2; i <= x; i++)
	{
		if (n % i == 0)
			cout << i << "\n";
	}
	cout << n;
	return 0;
}
