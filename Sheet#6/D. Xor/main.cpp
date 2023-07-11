#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    long long a,b,q;
    cin>>a>>b>>q;
    int res=q%3;
    if(res==1)
        cout<<a;
    else if(res==2)
        cout<<b;
    else
        cout<<(a^b);
    return 0;
}
