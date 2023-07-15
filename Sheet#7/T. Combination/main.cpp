#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
long long fact(int x, int y)
{
    long long s=1,t=2;
    for(int i=y+1; i<=x; i++)
    {
        s*=i;
        if(t<=x-y && s%t==0)
        {
            s/=t;
            t++;
        }
    }
    return s;
}
int main()
{
    int x,y;
    cin>>x>>y;
    if(x<y)
        cout<<0<<endl;
    else
    {
        cout<<fact(x,y)<<endl;
    }
    return 0;
}
