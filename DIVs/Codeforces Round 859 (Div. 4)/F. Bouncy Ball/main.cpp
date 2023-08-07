/******************************
 *                            *
 *    Author :  Mahmoud Saleh *
 *    Created:  __.__.2023    *
 *                            *
 ******************************
 *******************************************************
 *                                                     *
 *  ***-->           RE STUDENT             <--***     *
 *  ***--> 	   MALWARE ANALYST          <--***     *
 *  ***--> COMPUTER SCIENCE AND ENGINEERING <--***     *
 *                                                     *
 *******************************************************/
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
const ll  MM = 998244353, N = 5e5 + 20, MAX = 1e18;
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
int test()
{
    int n, m;
    cin >> n >> m;
    vector<vector<bool>>vis[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            vis[i][j] = vector<vector<bool>>(n + 10, vector<bool>(m + 10));
        }
    }
    int si, sj;
    cin >> si >> sj;
    int ei, ej;
    cin >> ei >> ej;
    string s;
    cin >> s;
    int a=0, b=0;
    if (s == "DL")a = 1, b = 0;
    else if (s == "DR")a = 1, b = 1;
    else if (s == "UL")a = 0, b = 0;
    else if (s == "UR")a = 0, b = 1;

    int cnt = 0;
    while (si != ei || sj != ej)
    {
        if (vis[a][b][si][sj])return cout << -1 << '\n', 0;
        vis[a][b][si][sj] = 1;
        bool f = 0;
        if (a)
        {
            if (si + 1 <= n)si++;
            else
            {
                a = 0;
                si--;
                f = 1;
            }
        }
        else
        {
            if (si - 1 >= 1)si--;
            else
            {
                a = 1;
                si++;
                f = 1;
            }
        }
        if (b)
        {
            if (sj + 1 <= m)sj++;
            else
            {
                b = 0;
                sj--;
                f = 1;
            }
        }
        else
        {
            if (sj - 1 >= 1)sj--;
            else
            {
                b = 1;
                f = 1;
                sj++;
            }
        }
        if (f)cnt++;
    }
    cout << cnt << '\n';
    return 0;
}
int32_t main()
{
    fast;
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    //cout << setprecision(9) << fixed;
    /*int t=1;
    while(t--)
    {
        test();
    }*/
    int i = 1;
    w(t)
    {
        test();
    }
    return 0;
}
