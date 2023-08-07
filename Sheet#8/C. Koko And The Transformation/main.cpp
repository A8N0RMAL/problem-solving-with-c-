#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    long long sn=0,sm=0;
    while(n--)
    {
        int x;
        cin>>x;
        sn+=x;
    }
    while(m--)
    {
        int y;
        cin>>y;
        sm+=y;
    }
    if(sn==sm)
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0;
}
