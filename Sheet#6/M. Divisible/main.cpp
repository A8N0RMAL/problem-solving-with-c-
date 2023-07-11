#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.size();
    long long x,res=0;
    cin>>x;
    for(int i=0; i<n; i++)
    {
        res*=10;
        res+=s[i]-48;
        res%=x;
    }
    if(res==0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
