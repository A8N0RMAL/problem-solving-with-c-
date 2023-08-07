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
    int n;
    cin>>n;
    int mn=INT_MAX,mx=INT_MIN,mxpos=0,mnpos=0;
    for(int i=1; i<=n; i++)
    {
        int x;
        cin>>x;
        if(mn >= x) // = bc we need z closet element to end
        {
            mn = x;
            mnpos = i;
        }
        if(mx < x)
        {
            mx = x;
            mxpos = i;
        }
    }
    if( mxpos > mnpos)
        cout<<(mxpos - 1) + (n - ++mnpos)<<"\n";
    else
        cout<<(mxpos - 1) + (n - mnpos)<<"\n";
    return 0;
}
