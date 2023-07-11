#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
long long GCD(long long n1, long long n2)// 12 18
{
    while(n2 != 0)
    {
        long long temp = n1; // 12  18  12
        n1 = n2; // 18  12  6
        n2 = temp % n1;
        // 12 % 18 = 12
        // 18 % 12 = 6
        // 12 % 6 = 0 -> when we reach zero then GCD will be n1
    }
    return n1; // 6
}

long long LCM(long long n1, long long n2)
{
    return (n1/GCD(n1,n2))*n2;
}

int main()
{
    long long a,b;
    cin>>a>>b; // 12 18
    cout<<GCD(a,b)<<" "<<LCM(a,b);
    return 0;
}
