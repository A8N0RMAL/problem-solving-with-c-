#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    long long n,s=0;
    cin>>n; // 12
    for(int i=1; i<=sqrt(n); i++)
    {
        // n    i   s
        // 12 / 1 = 12  12 / 12 = 1
        // 12 / 2 = 6   12 / 6 = 2
        // 12 / 3 = 4   12 / 4 = 3
        // sqrt(12)=3.464128
        if(n%i==0)
        {
            s+=i;
            // if n = 25
            // 25 / 1 = 25  // 25 / 25 = 1
            // 25 / 5 = 5   // 25 / 5 = 5, so we made this if cond.
            if(i!=sqrt(n))
                s+=n/i;
        }
    }
    cout<<s;
    return 0;
}
