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
    long long s=0;
    for(int i=0;i<n;i++)
        s+=arr[i];
    if(s<0)
        s*=-1;
    cout<<s<<endl;
    return 0;
}
