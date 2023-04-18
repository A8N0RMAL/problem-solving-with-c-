#include <iostream>
using namespace std;
int main() {
	int x;
	cin >> x;
	for (size_t i = 2; i <= x / 2; i++)
	{
		if (x % i == 0)
		{
			cout << "NO\n";
			return 0;
		}
	}
	cout << "YES\n";
	return 0;
}
