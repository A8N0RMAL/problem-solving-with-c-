/******************************
 *                            *
 *    Author :  Mahmoud Saleh *
 *    Created:  __.__.2023    *
 *                            *
 ******************************
 *******************************************************
 *                                                     *
 *  ***-->           RE STUDENT             <--***     *
 *  ***--> 	      MALWARE ANALYST           <--***     *
 *  ***--> COMPUTER SCIENCE AND ENGINEERING <--***     *
 *                                                     *
 *******************************************************/
#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"
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
#define c(x)            ll x; cin>>x;
#define fl(i,n) for(int i=0;i<n;++i)
using namespace std;
int prime(int x)
{
    for(int i=2;i<=sqrt(x);++i)
    {
        if(x%i==0)
            return -1;
    }
    return x;
}
void test()
{
    c(n);
    for(int i=2;i<=n;++i)
    {
        int r=prime(i);
        if(r!=-1)
            cout<<r<<" ";
    }
}
int32_t main()
{
    fast;
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    //cout << setprecision(9) << fixed;
    int t=1;
    while(t--)
    {
        test();
    }
    //w(t){test();}
    return 0;
}
