#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
long long sumodd(long long num)
{
    long long res=(num+1)/2;
    long long fres=res*res;
    return fres;
}
long long sumeven(long long num)
{
    long long res=(num*(num+1));
    return res;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int s,e;
    if(n>=m)
        s=m,e=n;
    else
        s=n,e=m;
    long long evenres= sumeven(e/2)-sumeven((s-1)/2);
    long long oddres=sumodd(e)-sumodd(s-1);
    cout<<evenres+oddres<<"\n";
    cout<<evenres<<"\n";
    cout<<oddres<<"\n";
    return 0;
}
