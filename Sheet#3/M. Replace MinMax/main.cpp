#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int mn=arr[0],mx=arr[0];
    int mni=0,mxi=0;
    for(int i=1;i<n;i<i++)
    {
        if(mn>arr[i])
        {
            mn=arr[i];
            mni=i;
        }
        else if(mx<arr[i])
        {
            mx=arr[i];
            mxi=i;
        }
    }
    swap(arr[mni],arr[mxi]);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
