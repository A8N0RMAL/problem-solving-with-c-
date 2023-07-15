#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
void prt(int arr[], int n, int idx)
{
    if(idx>n-1)
        return;
    prt(arr,n,idx+2);
    cout<<arr[idx]<<" ";
}
/*
    arr 1 5 8 2 3 9 11
    idx 0   2   4   6
    output--> 11 3 8 1
*/
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    // 1 5 8 2 3 9 11
    prt(arr,n,0);
    return 0;
}
