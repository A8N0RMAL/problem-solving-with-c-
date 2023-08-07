#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    int n, k ; // 7 4
    cin>>n>>k;
    int arr[n+2]= {};
    for(int i = 1 ; i <= n ; i ++)cin>>arr[i]; // 3 7 5 1 10 3 20
    sort(arr+1,arr+n+1); // base 1 // 1 3 3 5 7 10 20
    if(k==0)
    {
        if(arr[1]==1)
            cout<<-1;
        else
            cout<<1;
    }
    else if(arr[k]==arr[k+1] ) // 1 2 3 3 5 4 8
        cout<<-1;
    else
        cout<<arr[k];
    return 0;
}
