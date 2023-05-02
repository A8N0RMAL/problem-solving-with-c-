#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[1000001]={0};
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(arr[x]==0)
            arr[x]=1;
        else
            arr[x]=arr[x]+1;
    }
    for(int i=1;i<=m;i++)
        cout<<arr[i]<<"\n";
    return 0;
}
