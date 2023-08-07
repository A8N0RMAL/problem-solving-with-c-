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

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)cin>>arr[i];
    sort(arr,arr+n);
    bool res = false;
    for(int i=n-1; i>=2; --i)
    {
        if(arr[i-1]+arr[i-2]>arr[i] && arr[i]+arr[i-1]>arr[i-2] && arr[i]+arr[i-2]>arr[i-1])
        {
            res = true;
            break;
        }
    }
    if(res)
        cout<<ye;
    else
        cout<<no;
    return 0;
}
