/******************************
 *                            *
 *    Author :  Mahmoud Saleh *
 *    Created:  __.__.2023    *
 *                            *
 ******************************
 *******************************************************
 *                                                     *
 *  ***-->           RE STUDENT             <--***     *
 *  ***--> 	      MALWARE ANALYST           <--***     *
 *  ***--> COMPUTER SCIENCE AND ENGINEERING <--***     *
 *                                                     *
 *******************************************************/
#include <iostream>
using namespace std;
int main() {
	int f = 1;
	while (f)
	{
		long long x;
		cin >> x;
		if (x != 1999)
		{
			cout << "Wrong\n";
		}
		else
		{
			cout << "Correct\n";
			f = 0;
			break;
		}
	}
	return 0;
}
