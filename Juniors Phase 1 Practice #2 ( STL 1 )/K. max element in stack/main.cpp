#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define ye  "YES\n"
#define no  "NO\n"
#define all(v) v.begin(), v.end()
//#define pb              push_back
//#define mp              make_pair
//#define pii             pair<int,int>
//#define vi              vector<int>
//#define mii             map<int,int>
//#define pqb             priority_queue<int>
//#define ps(x,y)         fixed<<setprecision(y)<<x
//#define mk(arr,n,type)  type *arr=new type[n];
//#define w(x)            int x; cin>>x; while(x--)
using namespace std;

void test()
{
    ll n;
    cin>>n;
    stack<ll> s, smax;
    while(n--)
    {
        ll op,x;
        cin>>op;
        if(op == 1)
        {
            cin>>x;
            s.push(x);
            if(smax.empty() || smax.top() <= x)
                smax.push(x);
        }
        else // if type == 2, remove top element
        {
            if(s.top() == smax.top())
                smax.pop(); // checking to remove top from smax or not
            s.pop();
        }
        cout<<smax.top()<<"\n";
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
