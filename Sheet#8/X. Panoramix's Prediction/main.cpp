#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
bool isprime(int num)
{
    if(num == 0 || num == 1)
        return false;
    for(int i=2; i<=sqrt(num); i++)
    {
        if(num % i == 0)
            return false;
    }
    return true;
}
int nextprime(int num)
{
    bool found = false;
    int primenum = num;
    while(!found)
    {
        primenum++;
        if(isprime(primenum))
            found = true;
    }
    return primenum;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;
    if(nextprime(n) == m)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
