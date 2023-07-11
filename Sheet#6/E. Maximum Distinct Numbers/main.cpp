#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    long long n;
    cin>>n;
    for(long long i=1;; i++)
    {
        // 15 14  12   9  5  0  -> n
        // 1   2   3   4  5  6  -> i
        if(i > n)
        {
            cout<<i-1;
            return 0;
        }
        else
            n-=i;
    }
    return 0;
}
