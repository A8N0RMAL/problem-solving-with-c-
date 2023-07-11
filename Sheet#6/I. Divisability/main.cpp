#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
long long sum(long long n)
{
    return n*(n+1)/2;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int mn=min(a,b);
    int mx=max(a,b);
    cout<<(sum(mx/c)*c)-(sum((mn-1)/c)*c);
    return 0;
}
