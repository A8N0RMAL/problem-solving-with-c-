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
    int s,p;
    cin>>s>>p;
    int arr[p];
    for(int i=0; i<p; i++)
        cin>>arr[i];
    sort(arr,arr+p);
    ll res = arr[s-1] - arr[0];
    for(int i=1; i<=p-s; i++)
    {
        if(arr[s-1+i] - arr[i] < res)
            res = arr[s-1+i] - arr[i];
    }
    cout<<res;
    return 0;
}
