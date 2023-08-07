#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    map<int, int> mp;
    vector<int> v;
    int mx=INT_MIN;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(mp[arr[i]]==0)
            v.push_back(arr[i]);
        mp[arr[i]]++;
        mx=max(mx,mp[arr[i]]);
    }
    sort(v.begin(),v.end());
    while(mx--)
    {
        for(int i=0; i<v.size(); i++)
        {
            if(mp[v[i]]>0)
            {
                cout<<v[i]<<" ";
                mp[v[i]]--;
            }
        }
        cout<<"\n";
    }
    return 0;
}
