#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<1;
        return 0;
    }
    int arr[n];
    ll s=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        s+=arr[i];
    }
    int x=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+x);
    ll res=0,c=0;
    for(int i=x-1; i>=0; i--)
    {
        res+=arr[i];
        c++;
        if(res > s/2)
            break;
    }
    cout<<c;
    return 0;
}
