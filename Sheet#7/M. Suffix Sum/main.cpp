#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int n,m,c=0;
long long sum(long long arr[])
{
    if(c==m)
        return 0;
    c++;
    return arr[--n]+sum(arr);
}
int main()
{
    cin>>n>>m;
    long long arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<sum(arr)<<endl;
    return 0;
}
