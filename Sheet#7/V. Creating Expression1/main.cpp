#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
long long n,x;
long long arr[20];
bool check(long long s, long long idx)
{
    if(idx==n)
        return s==x;
    bool s1=check(s+arr[idx],idx+1);
    bool s2=check(s-arr[idx],idx+1);
    return s1||s2;
}
int main()
{
    cin>>n>>x;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    if(check(arr[0],1))
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
