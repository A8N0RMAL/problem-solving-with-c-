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
void test()
{
    /*
    c(n);
    ll tmp=n,rev=0;
    while(n)
    {
        rev=rev*10+n%10;
        n/=10;
    }
    cout<<rev<<endl;
    if(tmp==rev)
        cout<<ye;
    else
        cout<<no;
    */
    ll r1,r2;
    string s;
    cin>>s;
    char ss[s.size()];
    ll c=0;
    for(int i=s.size()-1;i>=0;--i)
    {
        ss[c]=s[i];
        ++c;
    }
    // convert string to num
    stringstream s1;
    s1<<s;
    s1>>r1;
    // convert char to num
    stringstream s2;
    s2<<ss;
    s2>>r2;
    cout<<r2<<"\n";
    if(r1==r2)
        cout<<ye;
    else
        cout<<no;
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
