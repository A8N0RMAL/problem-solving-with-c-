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
#define fll(i,n) for(int i=0;i<=n;++i)
#define fld(i,n) for(int i=n-1;i>=0;--i)
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
// Determine Parallel lines
/*
struct Point{
    ll x,y;
};
struct Line{
    Point Start, End;
};

in main below
    Line L1, L2;
    cin>>L1.Start.x>>L1.Start.y>>L1.End.x>>L1.End.y;
    cin>>L2.Start.x>>L2.Start.y>>L2.End.x>>L2.End.y;

    // Calculate direction vectors of L1 and L2
    int dx1 = L1.End.x - L1.Start.x;
    int dy1 = L1.End.y - L1.Start.y;
    int dx2 = L2.End.x - L2.Start.x;
    int dy2 = L2.End.y - L2.Start.y;

    cout<<(dx1*dy2 == dy1*dx2 ?ye:no);
*/

// Determine straight Line
/*
c(x1);c(y1);c(x2);c(y2);c(x3);c(y3);
    // Using slope

    // double slopeAB = (y2-y1)/(x2-x1);
    // double slopeAC = (y3-y1)/(x3-x1);
    // cout<<(slopeAB==slopeAC?ye:no);

    // Using Area
    double area = 0.5*abs(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2));
    cout<<(area == 0?ye:no);
*/

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
ll SumRange(ll l, ll r)
{
    // c(l);c(r);
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
/*
long long sumodd(long long num)
{
    long long res=(num+1)/2;
    long long fres=res*res;
    return fres;
    // long long oddres=sumodd(e)-sumodd(s-1);
}
*/
// s is the minimum num, e is the maximum
/*
long long sumeven(long long num)
{
    long long res=(num*(num+1));
    return res;
    // long long evenres= sumeven(e/2)-sumeven((s-1)/2);
}
void printarr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
*/
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
/*
bool isPalindrome(string& s, int l, int r)
{
    while (l < r)
    {
        if (s[l] != s[r])
        {
            return false;
        }
        l++;
        r--;
    }
    return true;
}
*/
/*
bool BinarySearch(const vector<int>& arr, int x)
{
    ll left = 0, right = arr.size() - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x)
        {
            return true;
        }
        else if (arr[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return false;
}
*/
/*
string getBinary(int n) {
    // Initialize an empty string to store the binary representation
    string binary = "";

    // Flag to indicate if we've encountered the first non-zero bit
    bool encounteredNonZero = false;

    // Iterate through each bit position
    for (int i = sizeof(n) * 8 - 1; i >= 0; i--) {
        // Extract the bit at position i
        int bit = (n >> i) & 1;

        // If the bit is non-zero or we've encountered a non-zero bit before, add it to the binary string
        if (bit || encounteredNonZero) {
            binary += (bit ? '1' : '0');
            encounteredNonZero = true;
        }
    }

    // Return the binary representation
    return binary;
}
*/
/*
bool isPalindrome(const string &str) {
    // Create a copy of the input string
    string reversed = str;

    // Reverse the copy
    reverse(all(reversed));

    // Check if the original and reversed strings are equal
    return str == reversed;
}
*/
/*
bool IsPowerOfTwo(ll n)
{
    // Check if n is a power of 2 by counting the number of set bits (1s) in its binary representation
    // A power of 2 has only one bit set to 1.
    return n && (!(n&(n-1)));
}
*/
/*
bool isPrime(long long n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (ll i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
*/
/*
ll sumOfDivisors(ll n) {
    ll sum=0;
    for(int i=1;i<=sqrt(n);++i)
    {
        if(n%i==0)
        {
            sum+=i;
            if(i!=sqrt(n))
                sum+=n/i;
        }
    }
    return sum;
}
*/
int findMaxUptoIndex(int index, const vector<int>& A, vector<int>& result) {
    if (index == 1) {
        result[0] = A[0];
        return A[0];
    }

    int previousMax = findMaxUptoIndex(index - 1, A, result);

    int currentMax = max(previousMax, A[index - 1]);

    result[index - 1] = currentMax;

    return currentMax;
}
int test()
{
    c(n);
    vi A(n);
    fl(i, n) cin>>A[i];
    vi result(n);
    findMaxUptoIndex(n, A, result);
    fl(i, n) cout<<result[i]<<" ";
    cout<<endl;

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
