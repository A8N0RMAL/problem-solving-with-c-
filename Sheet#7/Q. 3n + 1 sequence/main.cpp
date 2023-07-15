#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int c=0;
void seq(int n)
{
    c++;
    if(n==1)
        return;
    if(n%2==0)
        seq(n/2);
    else
        seq(3*n+1);
}
int main()
{
    int n;
    cin>>n;
    seq(n);
    cout<<c<<endl;
    return 0;
}
