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
    ll a,b,c;
    cin>>a>>b>>c;
    if( a+b >= 10 || b+c >= 10 || a+c >= 10)
        cout<<ye;
    else
        cout<<no;
}
int main()
{
    fast;
    ll t ;
    cin>>t;
    while(t--)
    {
        test();
    }
    return 0;
}
