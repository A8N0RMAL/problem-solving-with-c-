#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int x = 0;
	while (n--)
	{
		int c;
		cin >> c;
		if (c > x)
			x = c;
	}
	cout << x << endl;
	return 0;
}
