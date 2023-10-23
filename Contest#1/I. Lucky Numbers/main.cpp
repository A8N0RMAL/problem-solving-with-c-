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
#define c(x)            ll x; cin>>x;
using namespace std;

void test()
{
    c(x);   // 39
    ll y=x%10;  // 39%10=9
    ll z=x-y;    // 39-9=30
    z/=10;
    if(y%z==0 || z%y==0)
        cout<<ye;
    else
        cout<<no;
}
int main()
{
    fast;
    //cin>>test;
    test();
    return 0;
}
