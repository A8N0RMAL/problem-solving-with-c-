#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
long long c=0;
void logg(long long n)
{
    if(n==1)
        return;
    c++;
    logg(n/2);
}
int main()
{
    long long n;
    cin>>n;
    logg(n);
    cout<<c<<endl;
    return 0;
}
