#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr1[n],arr2[n];
    for(int i=0;i<n;i++)
        cin>>arr1[i];
    sort(arr1,arr1+n);
    for(int i=0;i<n;i++)
        cin>>arr2[i];
    sort(arr2,arr2+n);
    int f=0;
    for(int i=0;i<n;i++)
    {
        if(arr1[i] != arr2[i])
        {
            f=1;
            break;
        }
    }
    if(f == 0)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
    return 0;
}
