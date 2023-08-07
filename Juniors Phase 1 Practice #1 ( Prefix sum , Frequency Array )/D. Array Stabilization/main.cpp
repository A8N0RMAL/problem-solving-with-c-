#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)cin>>arr[i];
    sort(arr,arr+n);
    int x=min(arr[n-1]-arr[1],arr[n-2]-arr[0]);
    cout<<x<<"\n";
    return 0;
}
