#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)cin>>arr[i];
    int s=0,e=n-1,mx=0,r1=0,r2=0,f=0;
    while(s <= e)
    {
        if(arr[s] >= arr[e])
        {
            mx = arr[s];
            s++;
        }
        else
        {
            mx = arr[e];
            e--;
        }
        if(f%2 == 0)
            r1+=mx;
        else
            r2+=mx;
        f++;
    }
    cout<<r1<<" "<<r2;
    return 0;
}
