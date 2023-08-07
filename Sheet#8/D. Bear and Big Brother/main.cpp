#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b;
    while(a<=b)
    {
        c++;
        a*=3,b*=2;
    }
    cout<<c;
    return 0;
}
