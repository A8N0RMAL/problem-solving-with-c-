#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    long long a,b,c;
    cin>>a>>b>>c;
    long long mx=max(a,b);
    long long mn=min(a,b);
    long long s=1;
    for(int i=mn; i<=mx; i++)
    {
        s*=i;
        s%=c;
    }
    cout<<s;
    return 0;
}
