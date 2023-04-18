#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int sp = n - 1;
	for (size_t i = 1; i <= n; i++)
	{
		for (size_t x = 1; x <= sp; x++)
		{
			cout << " ";
		}sp--;
		for (size_t z = 1; z < i * 2; z++)
		{
			cout << "*";
		}cout << endl;
	}
	return 0;
}
