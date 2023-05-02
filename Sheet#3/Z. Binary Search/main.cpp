#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int binarysearch(int arr[], int l,int r, int num)
{
    while(l<=r)
    {
        int m=l+(r-l)/2;
        if(arr[m] == num)
            return m;
        else if(arr[m] < num)
            l=m+1;
        else
            r=m-1;
    }
    return -1;
}

int main()
{
    int n,q;
    cin>>n>>q;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    // to do binary search, array has to be sorted.
    sort(arr,arr+n);
    while(q--)
    {
        int num;
        cin>>num;
        int res=binarysearch(arr,0,n-1,num);
        if(res==-1)
            cout<<"not found\n";
        else
            cout<<"found\n";
    }
    return 0;
}
