#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define ye  "YES\n"
#define no  "NO\n"
#define all(v) v.begin(), v.end()
using namespace std;
bool compare(ll a, ll b)
{
    return a>b;
}
int main()
{
    /*
    ai+aj > bi+bj
    ai+aj-bi-bj > 0
    (ai-bi)+(aj-bj) > 0
    */
    fast;
    int n;
    cin>>n;
    vector<ll> a(n);
    vector<ll> b(n);
    vector<ll> v(n);
    for(int i=0; i<n; ++i)cin>>a[i];
    for(int i=0; i<n; ++i)cin>>b[i],v[i]=a[i]-b[i]; // vector v has (ai-bi)
    a.clear();
    b.clear();
    sort(all(v),compare); // Descending sort
    ll s=0;
    int p1=0,p2=n-1;  // 2 pointers technique
    while(p1 <= p2)
    {
        if(v[p1] + v[p2] > 0)
        {
            s+=(p2-p1);  //no. pairs
            ++p1;
        }
        else
            --p2;
    }
    cout<<s;
    return 0;
}
