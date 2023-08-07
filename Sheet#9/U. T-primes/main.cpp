#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define ya  "YES\n"
#define no  "NO\n"
using namespace std;
ll arr[1000001]= {0};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    arr[1]=1; // not prime
    for(ll i=2; i<=1000; i++)
    {
        for(ll z=2*i; z<=1000000; z+=i)
            arr[z]=1;
    }
    // 0 1 2 3 4 5 6 7 8 9 10
    //[0 1 0 0 1 0 1 0 1 1 1]   // 0 -> prime   1 -> not prime
    int n;
    cin>>n;
    while(n--)
    {
        ll num;
        cin>>num;
        ll sq = sqrt(num); // if sqrt(num) is prime and has no fraction, then num is TP
        if((sq*sq)==num && arr[sq]==0)
            cout<<ya;
        else
            cout<<no;
    }
    return 0;
}
