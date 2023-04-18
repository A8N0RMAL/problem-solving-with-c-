#include <iostream>
using namespace std;
int main() {
	int k, s;
	cin >> k >> s;
	int c = 0;
	/*for (size_t x = 0; x <= k; x++)
	{
		for (size_t y = 0; y <= k; y++)
		{
			for (size_t z = 0; z <= k; z++)
			{
				if (x + y + z == s)
					c++;
			}
		}
	}
	cout << c << endl;*/
	for (size_t i = 0; i <= k; i++)
	{
		for (size_t j = 0; j <= k; j++)
		{
			if (s - i - j >= 0 && s - i - j <= k)
				c++;
		}
	}cout << c << endl;
	return 0;
}
