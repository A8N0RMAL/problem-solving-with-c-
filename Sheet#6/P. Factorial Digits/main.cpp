#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    double n,res;
    cin>>n;
    for(int i=1; i<=n; i++)
        res+=log10(i);
    /*
        log10(5) = ?
        log10(4) = ?
        log10(3) = ?
        log10(2) = ?
        log10(1) = ?
        sum of all = size of number, like 5! = 120, so size of 5! = 3
    */
    cout<<"Number of digits of "<<n<<"! is "<<(int)res+1<<endl;
    return 0;
}
