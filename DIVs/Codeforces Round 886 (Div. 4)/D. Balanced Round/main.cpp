#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
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
    ll k;
    cin>>k;
    vector<ll> v(n);
    for(auto&it:v)cin>>it;
    sort(all(v));
    ll c=0,ans=INT_MAX;
    for(int i=0; i<n-1; ++i)
    {
        ++c;
        if(abs(v[i]-v[i+1]) > k)
        {
            ans=min(ans,(n-c));
            c=0;
        }
    }
    ++c;
    ans=min(ans,(n-c));
    cout<<ans<<"\n";
}
int main()
{
    fast;
    w(t){test();}
    return 0;
}
