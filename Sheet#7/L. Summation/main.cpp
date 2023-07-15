#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int n;
long long s=0;
void sum(int arr[])
{
    if(n==0)
        return;
    n--;
    s+=arr[n];
    sum(arr);
}
int main()
{
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    sum(arr);
    cout<<s<<endl;
    return 0;
}
