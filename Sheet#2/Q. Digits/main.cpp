#include <iostream>
using namespace std;
int main() {
	/*int n;
	cin >> n;
	while (n--)
	{*/
		/*long long x;
		cin >> x;
		while (x != 0)
		{
			int c = x % 10;
			x /= 10;
			cout << c << " ";
		}
		cout << endl;*/
		/*string s;
		cin >> s;
		int size = s.size();
		for (size_t i = 0; i < s.size(); i++)
		{
			cout << s[s.size() - 1 - i] << " ";
		}
		cout << endl;
	}*/
	int x;
	cin >> x;
	while (x--)
	{
		string s;
		cin >> s;
		int size = s.size();
		for (size_t i = 0; i < s.size(); i++)
		{
			cout << s[s.size() - i - 1] << " ";
		}
		cout << "\n";
	}
	return 0;
}
