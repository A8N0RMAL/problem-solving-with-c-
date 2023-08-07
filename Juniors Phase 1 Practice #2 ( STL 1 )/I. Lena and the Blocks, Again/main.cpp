#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define int long long
#define ye  "YES\n"
#define no  "NO\n"
#define all(v) v.begin(), v.end()
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
using namespace std;

void test()
{
    ll n;
    cin>>n;
    vector<ll> v(n);
    ll mn=INT_MAX,mx=INT_MIN;
    for(int i=0; i<n; ++i)
    {
        cin>>v[i];
        mx=max(mx,v[i]);
        mn=min(mn,v[i]);
    }
    ll ans=INT_MAX,idxmx=INT_MIN,idxmn=INT_MAX;
    for(int i=0; i<n; ++i)
    {
        if(v[i] == mx)
            idxmx=i;
        if(v[i] == mn)
            idxmn=i;
        if(idxmx != INT_MIN && idxmn != INT_MAX)
            ans=min(ans,abs(idxmx-idxmn));
    }
    cout<<ans;
}
int32_t main()
{
    fast;
    int t = 1; //cin>>t;
    while(t--)
    {
        test();
    }
    return 0;
}
