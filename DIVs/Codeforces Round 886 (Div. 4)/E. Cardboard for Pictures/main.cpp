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
    ll n,c,sum=0,p=0;
		cin>>n>>c;  // 3 50
		for(ll i=0;i<n;i++){
			ll s;
			cin>>s; // 3 2 1
			c=c-s*s;    // 41 37 36
			sum+=s; // 3+2+1=6
		}
		ll u=sum/n;    // 6/3=2
		cout<<((ll)sqrt(u*u+c/n)-u)/2<<endl;
}
int main()
{
    fast;
    w(t){test();}
    return 0;
}
