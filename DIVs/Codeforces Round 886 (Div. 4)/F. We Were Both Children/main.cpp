#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define ye  "YES\n"
#define no  "NO\n"
#define all(v) v.begin(), v.end()
#define pb              push_back
#define mkp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define c(x)            int x; cin>>x;
using namespace std;

void test()
{
    c(n);
    mii mp;
    vector<ll> v;
    for(int i=0;i<n;++i)
    {
        c(x);
        if(x>n)continue;
        if(mp[x]==1)
            v.push_back(x);
        mp[x]++;
    }
    ll mx=0;
    sort(all(v));
    for(int i=n;i>=1;--i)
    {
        ll x=i,c=0;
        for(int j=1;j *j<=x;++j)
        {
            if(x%j==0)
            {
                c+=mp[j];
                if(x/j!=j)
                    c+=mp[(x/j)];
            }
        }
        mx=max(mx,c);
    }
    cout<<mx<<"\n";
}
int main()
{
    fast;
    w(t){test();}
    return 0;
}
