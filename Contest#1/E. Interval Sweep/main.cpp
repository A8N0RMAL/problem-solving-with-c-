#include <iostream>
using namespace std;
int main() {
	int n1, n2;
	cin >> n1 >> n2;
	if ((n1 == 0 && n2 == 0) || abs(n1 - n2) >= 2)
		cout << "NO\n";
	else
		cout << "YES\n";
	return 0;
}
