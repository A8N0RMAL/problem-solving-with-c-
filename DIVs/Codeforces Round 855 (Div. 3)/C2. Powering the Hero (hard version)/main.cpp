#include <iostream>
#include <bits/stdc++.h>
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
//#define int long long
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
#define w(x)            ll x; cin>>x; while(x--)
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

// nCr, nPr, power, catalan num
/*
namespace combinatorics
{
    ll MOD;
    vector<ll> fac,inv,finv;
    ll nCr(ll x,ll y)
    {
        if(x<0||y>x)return(0);
        return(fac[x]*finv[y]%MOD*finv[x-y]%MOD);
    }
    ll power(ll b,ll n)
    {
        b%=MOD;
        ll s=1;
        while(n)
        {
            if(n%2==1)s=s*b%MOD;
            b=b*b%MOD;
            n/=2;
        }
        return s;
    }
    void init(int n,ll mod)
    {
        fac.resize(n+1);
        inv.resize(n+1);
        finv.resize(n+1);
        MOD=mod;
        fac[0]=inv[0]=inv[1]=finv[0]=finv[1]=1;
        for(ll i=1;i<=n;++i)fac[i]=fac[i-1]*i%MOD;
        for(ll i=2;i<=n;++i)inv[i]=MOD-MOD/i*inv[MOD%i]%MOD;
        for(ll i=2;i<=n;++i)finv[i]=finv[i-1]*inv[i]%MOD;
    }
    ll Inv(int x)
    {
        return power(x,MOD-2);
    }
    ll catalan(int n)
    {
        return (nCr(2*n,n)*Inv(n+1))%MOD;
    }
};
using namespace combinatorics;
*/

/*
// gcd, lcm, max num (in range)...
const int N=1e5+5;
ll s[N],dp[N][25];int n,q,LOG[N];
ll merge(ll a,ll b)
{
    return max(a,b);    // max, min, __gcd, __lcm
}
void build()
{
    for(int i=0;i<n;i++)
    {
        dp[i][0]=s[i];
    }
    for(int mask=1;(1<<mask)<=n;mask++)
    {
        for(int i=0;i+(1<<mask)<=n;i++)
        {
            dp[i][mask]=merge(dp[i][mask-1],dp[i+(1<<(mask-1))][mask-1]);
        }
    }
}
ll query(int l,int r)
{
    int mask=LOG[r-l+1];
    return merge(dp[l][mask],dp[r-(1<<mask)+1][mask]);
}
void preCount()
{
    LOG[1]=0;
    for(int i=2;i<N;i++)
    {
        LOG[i]=LOG[i>>1]+1;
    }
}
*/
void test()
{
    c(n);
    priority_queue<int> pq;
    vi v(n);
    fl(i,n)cin>>v[i];
    ll x=0;
    fl(i,n)
    {
        if(v[i]==0)
        {
            if(pq.size()>0)
            {
                x+=pq.top();
                pq.pop();
            }
        }
        else pq.push(v[i]);
    }
    cout<<x<<endl;
}
signed main()
{
    fast;
    //init(2e5,1e9+7);  // for combinatorics
    /* gcd, lcm, max num (in range)...
    preCount();
    cin>>n>>q;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    build();
    while(q--)
    {
        // must be zero idx
        int l,r;cin>>l>>r;
        cout<<query2(--l,--r)<<'\n';
    }
    */
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    //cout << setprecision(9) << fixed;
    /*int t=1;
    while(t--)
    {
        test();
    }*/
    w(t){test();}
    //cout<<nCr(5,2);
    return 0;
}
