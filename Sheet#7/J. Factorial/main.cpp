#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
long long fact(long long x)
{
    if(x==2)
        return 2;
    return x*fact(x-1);

}
int main()
{
    long long n;
    cin>>n;
    cout<<fact(n);
    return 0;
}
