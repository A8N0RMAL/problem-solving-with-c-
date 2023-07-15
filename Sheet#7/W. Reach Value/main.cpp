#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
long long x;
bool reachval(long long n)
{
    if(x<n)
        return 0;
    else if(x==n)
        return 1;
    else
        return reachval(n*10) || reachval(n*20);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>x;
        if(reachval(1))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
