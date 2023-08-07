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
ll isSafe(ll n, ll m, ll r, ll c, vector < vector < ll > >& matrix, vector < vector < ll > >&vis)
{
    if(r >= 0 and r < n and c >=0 and c < m)
    {
        return (matrix[r][c] and !vis[r][c]);
    }
    else
        return 0;
}
ll traverse(ll n, ll m, ll r, ll c, vector < vector < ll > >&matrix, vector < vector < ll > >&vis)
{
    static ll ro[4] = {-1,1,0,0};
    static ll co[4] = {0,0,-1,1};
    ll sum = 0;
    for(ll k = 0 ; k < 4; k++)
    {

        if(isSafe(n,m,r+ro[k],c+co[k],matrix,vis))
        {
            vis[r+ro[k]][c+co[k]] = 1;
            sum += matrix[r+ro[k]][c+co[k]]+traverse(n,m,r+ro[k],c+co[k],matrix,vis);
        }
    }
    return sum;
}
void test()
{
    ll n,m,cell,maxi = 0;
    cin>>n>>m;
    vector < vector < ll > > matrix;
    vector<vector<ll>> vis(n, vector<ll> (m, 0));
    for(ll i = 0; i < n ; i++)
    {
        vector < ll > row;
        for(ll j = 0 ; j < m ; j++)
        {
            cin>>cell;
            row.push_back(cell);
        }
        matrix.push_back(row);
    }
    for(ll i = 0 ; i < n; i++)
    {
        for(ll j = 0 ; j < m ; j++)
        {

            if(matrix[i][j]!=0 and !vis[i][j])
            {
                vis[i][j] = 1;
                ll value = traverse(n,m,i,j,matrix,vis)+matrix[i][j];
                maxi = max(maxi,value);
            }
        }
    }
    cout<<maxi<<endl;
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
    w(t)
    {
        test();
    }
    return 0;
}
