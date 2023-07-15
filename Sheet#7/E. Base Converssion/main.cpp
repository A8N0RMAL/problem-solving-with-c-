#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
void prt(int x)
{
    if(x==0)
        return;
    prt(x/2);
    cout<<x%2;
}
/*
    10/2=5  x=10
    5/2=2   x=5
    2/2=1   x=2
    1/2=0   x=1
    we've reached 0 (base case) then continue performing code
    x%2
    1%2=1
    2%2=0
    5%2=1
    10%2=0
    return value will be 1010
*/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        prt(n);
        cout<<"\n";
    }
    return 0;
}
