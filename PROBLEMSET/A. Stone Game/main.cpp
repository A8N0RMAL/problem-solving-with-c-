#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
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
ll gcd(ll x, ll y)
{
    return (!y) ? x : gcd(y, x % y);
}
ll lcm(ll x, ll y)
{
    return ((x / gcd(x, y)) * y);
}
ll add(ll a, ll b, ll m)
{
    return ((a % m) + (b % m)) % m;
}
ll mul(ll a, ll b, ll m)
{
    return ((a % m) * (b % m)) % m;
}
ll sub(ll a, ll b, ll m)
{
    return ((a % m) - (b % m) + m) % m;
}
/*
bool isPrime(ll n) {
    if (n <= 1) {
        return false;
    }
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

long long nCr(int n, int r) {
    if (r > n)
        return 0;
    r = max(r, n - r);
    long long ans = 1, div = 1, i = r + 1;
    while (i <= n) {
        ans *= i;
        i++;
        ans /= div;
        div++;
    }
    return ans;
}

long long nPr(int n, int r) {
    if (r > n)
        return 0;
    long long p = 1, i = n - r + 1;
    while (i <= n) p *= i++;
    return p;
}

ll maxSubstring(string s) {
    ll n = s.length();
    ll i = 0, j = 0;
    ll maxLen = 0;
    unordered_set<char> charSet;
    while (j < n) {
        if (charSet.find(s[j]) == charSet.end()) {
            charSet.insert(s[j]);
            maxLen = max(maxLen, j - i + 1);
            j++;
        } else {
            charSet.erase(s[i]);
            i++;
        }
    }
    return maxLen;
}
*/
/*
All chars appear just once
void setchars()
{
    ll f=1;
    for(char c='a';c<='z';++c)
    {
        if(sett.find(c)==sett.end() && sett.find(c-'a'+'A')==sett.end())
        {
            f=0;
            break;
        }
    }
    if(f)
        cout<<ye;
    else
        cout<<no;
}
*/
void test()
{
    /*
    c(n);
    ll arr[n];
    fl(i,n)cin>>arr[i];
    ll x=*max_element(arr,arr+n);
    ll y=*min_element(arr,arr+n);
    ll p1=0,p2=n-1,c=0,r=2;
    while(p1<p2)
    {
        if(r == 0)
            break;
        if(arr[p1] == x || arr[p1] == y)
            --r;
        if(arr[p2] == x || arr[p2] == y)
            --r;
        ++c;
        ++p1;
        --p2;
    }
    cout<<c<<"\n";
    */

    c(n);
    ll arr[n+5];
    ll x=-1,y=1000;
    for(int i=1;i<=n;++i)
    {
        cin>>arr[i];
        x=max(x,arr[i]);
        y=min(y,arr[i]);
    }
    //ll x=*max_element(arr,arr+n);
    //ll y=*min_element(arr,arr+n);
    ll f=0,fl=0,cc=0,cc1=0,cc2=0;
    for(int i=1;i<=n;++i)
    {
        if(arr[i] == x)f=1;
        if(arr[i] == y)fl=1;
        ++cc;
        if(f && fl)break;
    }
    ll ff=0,ffl=0;
    for(int i=n;i>=1;--i)
    {
        if(arr[i] == x)ff=1;
        if(arr[i] == y)ffl=1;
        ++cc1;
        if(ff && ffl)break;
    }
    for(int j=1;j<=n;++j)
    {
        ++cc2;
        if(arr[j]==x || arr[j]==y)
            break;
    }
    ll fff=0,fffl=0;
    for(int j=n;j>=1;--j)
    {
        ++cc2;
        if(arr[j]==x || arr[j]==y)
            break;
    }
    ll mn=min(cc,cc1);
    mn=min(mn,cc2);
    cout<<mn<<"\n";
    /*
         int N, f1=0, f2=0, f3=0,f4, c1=0,c2=0, c3=0;
        cin>>N;
        int vector<int>v(N);
        for(int i=0; i<N; i++){
            cin>>v[i];
            int mx=max(mx, v[i]);
            int mn=min(mn, v[i]);
        }
        int mx=0, mn=0;
        for(int i=1; i<=N; i++){
            if(mx==v[i]) f1=1;
            if(mn==v[i]) f2=1;
            c1++;
            if(f1 and f2) break;
        }
        for(int i=N; i>=1; i++){
            if(mx==v[i]) f3=1;
            if(mn==v[i]) f4=1;
            c2++;
            if(f3 and f4) break;
        }
        for(int j=1; j<=N; j++){
            c3++;
            if(mx==v[j] or mn==v[j]) break;
        }
        for(int j=N; j>=1; j++){
            c3++;
            if(mx==v[j] or mn==v[j]) break;
        }


       cout<<min(c1,min(c2,c3))<<endl;
      /*  if(c3<=c1 && c3<=c2)
        cout<<c3<<endl;

        else if(c2<=c1 && c2<=c3)
        cout<<c2<<endl;

        else cout<<c1<<endl; */
}
int32_t main()
{
    fast;
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    //cout << setprecision(9) << fixed;
    w(t){test();}
    return 0;
}
// ====================Link====================
// https://codeforces.com/problemset/problem/1538/A
