#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int f=1;
void prt(int x)
{
    if(x==0)
        return;
    if(f==0)
        cout<<" ";
    cout<<x--;
    f=0;
    prt(x);
}
int main()
{
    int n;
    cin>>n;
    prt(n);
    return 0;
}
