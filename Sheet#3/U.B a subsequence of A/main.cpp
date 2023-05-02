#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    long long n,m;
    cin>>n>>m;
    long long a[n],b[m];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
    long long c=0,x=0;
    for(int i=0;i<n;i++)
    {
            if(a[i]==b[x])
                c++,x++;
    }
    if(c==m)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
