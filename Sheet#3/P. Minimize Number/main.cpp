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
    {
        cin>>arr[i];
        if(arr[i]%2 != 0)
        {
            cout<<0<<endl;
            return 0;
        }
    }
    int arr2[n]={0};
    for(int i=0;i<n;i++)
    {
        while(arr[i]%2==0)
        {
            arr[i]/=2;
            arr2[i]++;
        }
    }
    sort(arr2,arr2+n);
    cout<<arr2[0];
    return 0;
}
