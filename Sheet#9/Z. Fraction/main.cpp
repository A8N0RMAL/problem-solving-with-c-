#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define ye  "YES\n"
#define no  "NO\n"
using namespace std;
// gcd fun for getting gcd < n2
//         2      4     Denominator
ll gcd(ll n1, ll n2)
{
    while(n2 != 0) // 4 != 0
    {
        return gcd(n2,n1%n2);
        // 4,2%2    4,2
        // 2,4%2    2,2
        // 2,2%2    2,0 -> n2 == 0 -> return n1
    }
    return n1;
}
//        n1     n3     Numerator
ll lcm(ll n1, ll n2)
{
    return ((n1/gcd(n1,n2))*n2);
}
int main()
{
    fast;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n1,n2,n3,n4;
    char c1,c2;
    cin>>n1>>c1>>n2>>n3>>c2>>n4;
    cout<<lcm(n1,n3)<<"/"<<gcd(n2,n4);
    return 0;
}
