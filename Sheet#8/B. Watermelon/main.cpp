#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n<=2)
    {
        cout<<"NO\n";
        return 0;
    }
    if(n%2==0)
        cout<<"yes\n";
    else
        cout<<"NO\n";
    return 0;
}
