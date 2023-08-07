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
    ll n,mxq=INT_MIN,mxidx=INT_MIN;
    cin>>n;
    vector<ll> v(n),vq(n);
    for(int i=0; i<n; ++i)
    {
        cin>>v[i]>>vq[i];
        if(v[i] <= 10 && mxq < vq[i])
        {
            mxq=vq[i];
            mxidx=i;
        }
    }
    cout<<mxidx+1<<"\n";
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        test();
    }
    return 0;
}
