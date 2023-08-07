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
#define mip             map<int,pair<int,int>>
#define di              deque<int>
#define pqb             priority_queue<int>
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
using namespace std;

void test()
{
    int n,m;
    cin>>n>>m;
    di d;
    mip miip;
    int a;
    for(int i=0; i<n; ++i)
    {
        cin>>a;
        d.pb(a);
    }
    for(int i=0; i<n*2; ++i)
    {
        miip[i+1]= {d[0],d[1]};
        if(d[0]>d[1])
        {
            int tmp=d[0];
            d.pop_front();
            d.pb(d.front());
            d.pop_front();
            d.push_front(tmp);
        }
        else
        {
            d.pb(d.front());
            d.pop_front();
        }
    }
    while(m--)
    {
        ll a;
        cin>>a;
        if(a<n)
            cout<<miip[a].first<<" "<<miip[a].second<<"\n";
        else
            cout<<miip[a%(n-1)+(n-1)].first<<" "<<miip[a%(n-1)+(n-1)].second<<"\n";
    }
}
int main()
{
    fast;
    int t = 1; //cin>>t;
    while(t--)
    {
        test();
    }
    return 0;
}
