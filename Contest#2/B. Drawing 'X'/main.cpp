#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int x = n / 2;
			if (i == x && j == x)
				cout << "X";
			else if (i==j)
				cout << "\\";
			else if (j == n - i - 1)
				cout << "/";
			else
				cout << "*";
		}
		cout << endl;
	}
	return 0;
}
