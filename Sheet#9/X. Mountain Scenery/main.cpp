#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define ye  "YES\n"
#define no  "NO\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,num;
    cin>>n>>num; // 3 2
    n=(n*2)+1; // 7
    int arr[n];
    for(int i=0; i<n; i++)cin>>arr[i];
    // 0 1 2 3 4 5 6
    // 0 5 3 5 1 5 2
    for(int i=1; i<n-1; i++) // from 1 : 6
    {
        //  5 > 0+1               5 > 3+1   // +1 bc 5 must be less than other 2 nums, cannot be equal
        if(arr[i]>arr[i-1] +1 && arr[i]>arr[i+1] +1)
        {
            --arr[i];
            num--;
            if(num == 0)
                break;
        }
    }
    for(int i=0; i<n; i++)cout<<arr[i]<<" ";
    return 0;
}
