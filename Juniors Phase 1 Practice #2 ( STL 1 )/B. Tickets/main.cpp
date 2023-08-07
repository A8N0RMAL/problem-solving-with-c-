#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define ye  "YES\n"
#define no  "NO\n"
using namespace std;

int main()
{
    fast;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin>>t;
    queue<int> q;
    while(t--)
    {
        int x,id;
        cin>>x>>id;
        if(x == 1)
            q.push(id);
        else
        {
            if(q.front() == id)
                cout<<"Yes\n";
            else
                cout<<"No\n";
            q.pop();
        }
    }
    return 0;
}
