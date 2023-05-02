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
    for(int i=0;i<n;i++)
    {
       if(arr[i]<0)
            arr[i]=2;
       else if(arr[i]>0)
        arr[i]=1;
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
