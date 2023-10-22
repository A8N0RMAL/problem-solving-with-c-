#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define ye  "YES\n"
#define no  "NO\n"
#define all(v) v.begin(), v.end()
#define c(x)            int x; cin>>x;
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
    ll e,m,b,k=0;
    cin>>e>>m>>b;
    ll mn=min(min(e,m),b);
    k+=mn,e-=mn,m-=mn,b-=mn;    // cond. 3
    mn=min(e/2,b);  // cond. 1
    k+=mn;
    cout<<k<<"\n";
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
