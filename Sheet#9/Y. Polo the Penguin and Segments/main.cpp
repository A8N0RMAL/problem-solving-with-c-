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

    ll s,n,c;
    cin>>s>>n;
    while(s--)
    {
        int x,y;
        cin>>x>>y;
        c+=(y-x+1);
    }
    c%=n;
    if(c == 0)
        cout<<0;
    else
        cout<<n-c;
    return 0;
}
