#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
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
using namespace std;

void test()
{
    ll n;
    cin>>n; // 5
    vector<ll> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];  // 2 1 1 2 5
        v[i]%=2;    // 0 1 1 0 1    pop 2 consecutive items(1,1)
    }               // 0     0 1    pop 2 consecutive items(0,0)
    //         1
    stack<ll> st;
    for(int i=0; i<n; i++)
    {
        if(st.size() != 0 && st.top()==v[i])
            st.pop(); // pop if two consecutive items r equal & stack isn't empty
        else
            st.push(v[i]);
    }
    // if stack is empty or has 1 element then print yes otherwise print no
    cout<<(st.size()<=1 ? ye : no);
}
int main()
{
    fast;
    int t = 1; //cin>>t;
    while(t--)
    {
        test();
    }
    return 0;
}
