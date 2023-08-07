#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll s,mn,mx;
    cin>>s;
    ll arr[s];
    for(int i=0; i<s; i++)
        cin>>arr[i];
    for(int i=0; i<s; i++)
    {
        if(i == 0)
        {
            mn = abs(arr[i]-arr[i+1]);
            mx = abs(arr[s-1]-arr[i]);
        }
        else if(i == s-1)
        {
            mn = abs(arr[i]-arr[i-1]);
            mx = abs(arr[i]-arr[0]);
        }
        else
        {
            mn = min(abs(arr[i]-arr[i-1]),abs(arr[i]-arr[i+1]));
            mx = max(abs(arr[i]-arr[0]),abs(arr[i]-arr[s-1]));
        }
        cout<<mn<<" "<<mx<<"\n";
    }
    return 0;
}
