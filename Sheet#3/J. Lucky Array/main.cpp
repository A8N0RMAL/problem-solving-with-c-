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
    sort(arr,arr+n);
    int c=1,mn=arr[0];
    for(int i=1;i<n;i++)
    {
        if(mn==arr[i])
            c++;
    }
    if(c%2!=0)
        cout<<"Lucky\n";
    else
        cout<<"Unlucky\n";
    return 0;
}
