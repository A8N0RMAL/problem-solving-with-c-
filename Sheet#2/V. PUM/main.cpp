#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (size_t j = 1; j <= n * 4; j++)
	{
		if (j % 4 == 0)cout << "PUM\n";
		else cout << j << " ";
	}
	cout << endl;
	return 0;
}
