#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int x = 0, y = 1;
	if (n == 1)
		cout << x << endl;
	else if (n == 1)
		cout << x << " " << y << endl;
	else
	{
		cout << x << " " << y << " ";
		for (size_t i = 2; i < n; i++)
		{
			int z = x + y;
			cout << z << " ";
			x = y;
			y = z;
		}
	}
	return 0;
}
