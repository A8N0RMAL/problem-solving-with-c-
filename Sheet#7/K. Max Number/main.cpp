#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int n;
int mx=INT_MIN;
void maxnum(int arr[])
{
    if(n==0)
        return;
    mx=max(mx,arr[--n]);
    maxnum(arr);
}
int main()
{
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    maxnum(arr);
    cout<<mx<<endl;
    return 0;
}
