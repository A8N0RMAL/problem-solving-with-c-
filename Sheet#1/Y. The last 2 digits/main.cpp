#include <iostream>
using namespace std;
int main() {
	int z, x, c, v;
	cin >> z >> x >> c >> v;
	int a = z % 100;
	int s = x % 100;
	int d = c % 100;
	int f = v % 100;
	long long h = (a * s * d * f) % 100;
	if (h <= 9)
		cout << "0" << h << endl;
	else
		cout << h << endl;
	return 0;
}
