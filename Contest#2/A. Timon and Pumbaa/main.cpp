#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	int x = a - b;
	if (x >= 0)
		cout << x << endl;
	else
		cout << 0 << endl;
	return 0;
}
