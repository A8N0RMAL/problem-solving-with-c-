#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
/*#define ll long long
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
*/
using namespace std;

void test()
{
    double n,k,a;
    cin>>n>>k>>a;
    double r=n*k/a;
    long long x=r;
    double z=r-x;
    if(z>0)
        cout<<"double\n";
    else if(x<=2147483647)
        cout<<"int\n";
    else
        cout<<"long long\n";
}
int main()
{
    fast;
    //cin>>test;
    test();
    return 0;
}
