#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int x;
void prt(int n)
{
    if(n==0)
        return;
    for(int i=1; i<=x-n; i++)
        cout<<" ";
    for(int i=1; i<=n*2-1; i++)
        cout<<"*";
    cout<<"\n";
    prt(n-1);
}
int main()
{
    int n;
    cin>>n;
    x=n;
    prt(n);
    return 0;
}
