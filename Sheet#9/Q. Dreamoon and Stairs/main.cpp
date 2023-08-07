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
    int stp,n,mn;
    cin>>stp>>n;
    if(stp < n)
    {
        cout<<-1;
        return 0;
    }
    if(stp % 2 == 0)
        mn = stp/2;
    else
        mn = (stp/2)+1; // if num is odd
    for(int i=mn; i<=stp; i++)
    {
        if(i%n==0)
        {
            cout<<i;
            return 0;
        }
    }
    return 0;
}
