#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;
ll brr[10000001]= {};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        brr[arr[i]]++;
    }
    ll res=0;
    for(int i=0; i<10000001; i++)
    {
        if(brr[i] > 1)
            res+=brr[i]-1;
    }
    if(res == 0)
        cout<<-1;
    else
        cout<<res;
    return 0;
}
