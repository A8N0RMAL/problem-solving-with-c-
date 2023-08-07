#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    /*
        1 -> 1378 = 1378 -> 8
        2 -> 1378 *1378 = 1898884 -> 4
        3 -> 1378 *1378 *1378 = 2616662152 -> 2
        4 -> 3605760445456 -> 6

        5 -> 4968737893838368 -> 8

        num % 4 == 1 -> 8
        num % 4 == 2 -> 4
        num % 4 == 3 -> 2
        num % 4 == 0 -> 6
    */
    long long num;
    cin>>num;
    if(num == 0)
    {
        cout<<1;
        return 0;
    }
    if(num % 4 == 0)
        cout<<6;
    else if(num % 4 == 1)
        cout<<8;
    else if(num % 4 == 2)
        cout<<4;
    else if(num % 4 == 3)
        cout<<2;
    return 0;
}
