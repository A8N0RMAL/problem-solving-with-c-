#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long a=0,b=1;
    long long s;
    if(n==1)
        cout<<a;
    else if(n==2)
        cout<<b;
    else
    {
        for(int i=3;i<=n;i++)
        {
            s=a+b;
            a=b;
            b=s;
        }
        cout<<s<<endl;
    }
    return 0;
}
