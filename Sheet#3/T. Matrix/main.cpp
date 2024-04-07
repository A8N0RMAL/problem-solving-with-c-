/******************************
 *                            *
 *    Author :  Mahmoud Saleh *
 *    Created:  __.__.2024    *
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
#define fld(i,n) for(int i=n-1;i>=0;--i)
using namespace std;
ll arr[1000001];
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
/*
void SumRange()
{
    c(l);c(r);
    // Ensure that start is not greater than end
    if(l > r)
    {
        ll tmp = l;
        l=r;
        r=tmp;
    }
    // u can use swap(l,r) <3
    ll n = r - l + 1;
    ll sum = (n * (l+r)) / 2;
    cout<<sum<<endl;
}
*/
void printarr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}
/*
void swap( int&x, int&y)
{
    int temp=x;
    x=y;
    y=temp;
}

void SelectionSort(ll arr[], ll n)
{
    ll mnidx;
    for(int i=0;i<n-1;++i) // 0 to < n-1 because the last element(arr[n-1]) will always be z max
    {
        mnidx=i;
        for(ll j=i+1; j<n; ++j)
        {
            if(arr[j] < arr[mnidx]) // mnidx = i
                mnidx=j; // checking for the min idx after i idx using j
        }
        if(mnidx != i)
            swap(arr[i], arr[mnidx]);
    }
}
*/
/*
    c(l);c(r);c(n);
    // Calculate the number of numbers between L and R (inclusive) that are divisible by N
    ll divs=r/n-(l-1)/n;
    // Calculate the number of numbers between L and R (inclusive) that are not divisible by N
    ll not_divs=(r-l+1)-divs;
*/
int test()
{
    c(n);
    ll arr[n][n];
    fl(i, n)
    {
        fl(j, n)
            cin>>arr[i][j];
    }
    ll s_main=0, s_notmain=0;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            if(i==j)
                s_main+=arr[i][j];
            if(j==n-i-1)
                s_notmain+=arr[i][j];
        }
    }
    ll s=abs(s_main-s_notmain);
    cout<<s<<endl;
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
