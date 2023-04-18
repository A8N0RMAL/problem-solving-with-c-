#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int sp = n - 1;
	for (size_t i = 1; i <= n; i++)
	{
		for (size_t j = sp; j > 0; j--)
		{
			cout << " ";
		}
		sp--;
		for (size_t k = 1; k < i*2; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
	int x = n;
	for (size_t i = 1; i <= n; i++)
	{
		for (size_t j = 1; j < i; j++)
		{
			cout << " ";
		}
		for (size_t k = (x * 2) - 1; k > 0; k--)
		{
			cout << "*";
		}x--;
		cout << endl;
	}
	/*int p = 0;
	for (size_t i = n; i >= 1; i++)
	{
		for (size_t j = p; j > 0; j++)
		{
			cout << " ";
		}
		p++;
		for (size_t k = i * 2 - 1; k > 0; k--)
		{
			cout << "*";
		}n--;
		cout << endl;
	}*/
	return 0;
}
