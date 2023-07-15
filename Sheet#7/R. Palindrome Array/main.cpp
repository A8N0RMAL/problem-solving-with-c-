#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int n,arr[100000];
bool pld(int idx)
{
    if(idx==n)
        return 1;
    return (arr[idx]==arr[n-idx-1]) && pld(idx+1);
}
int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    if(pld(0))
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
