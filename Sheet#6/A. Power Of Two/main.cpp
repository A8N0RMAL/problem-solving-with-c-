#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    /*
    8
    2^x=8
    log(2^x)=log(8)
    xlog(2)=log(8)
    x=log(8)/log(2)
    */
    long long n;
    cin>>n;
    double s=log2(n)/log2(2);
    if(s-(long long)s != 0)
        cout<<"NO\n";
    else
        cout<<"YES\n";
    return 0;
}
