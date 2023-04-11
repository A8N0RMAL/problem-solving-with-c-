#include <iostream>
#include<iomanip>
#include<bits/stdc++.h>
using namespace std;
int main() {
	double r;
	cin >> r;
	double pi = 3.141592653;
	double a = r * r * pi;
	cout << fixed << setprecision(9) << a << endl;
	return 0;
}
