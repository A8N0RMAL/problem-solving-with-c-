#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;

int main()
{
    /*ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);*/
    int n;
    cin>>n;
    ll arr[n];
    string s;
    cin>>s;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    ll t=0,mn=INT_MAX;
    for(int i=0; i<n-1; i++)
    {
        if(s[i]=='R' && s[i+1]=='L')
        {
            t = (arr[i+1]-arr[i])/2;
            if(t<mn)
                mn=t;
        }
    }
    if(mn==INT_MAX)
        cout<<-1;
    else
        cout<<mn;
    return 0;
}
