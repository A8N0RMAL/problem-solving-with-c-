#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int mn, def, mx;
	if (a>=b&&a>=c)
	{
		mx = a;
		if (b >= c) {
			def = b;
			mn = c;
		}
		else
		{
			def = c;
			mn = b;
		}
	}
	else if (b>=a&&b>=c)
	{
		mx = b;
		if (a>=c)
		{
			def = a;
			mn = c;
		}
		else
		{
			def = c;
			mn = a;
		}
	}
	else
	{
		mx = c;
		if (a>=b)
		{
			def = a;
			mn = b;
		}
		else
		{
			def = b;
			mn = a;
		}
	}
	cout << mn << "\n" << def << "\n" << mx << "\n\n" << a << "\n" << b << "\n" << c << "\n";
	/*if (a < b && a < c)
		a = mn;
	else if (a > b && a > c)
		a = mx;
	else if (b > a && b > c)
		b = mx;
	else if (b < a && b < c)
		b = mn;
	else if (c > a && c > b)
		c = mx;
	else if (c < a && c < b)
		c = mn;*/
	return 0;
}
