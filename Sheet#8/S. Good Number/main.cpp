#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,r,res=0;
    cin>>n>>r;
    string range="0123456789";
    for(int i=1; i<=n; i++)
    {
        int c=0;
        string num;
        cin>>num;
        for(int z=0; z<=r; z++)
        {
            if(num.find(range.substr(z,1)) != string::npos)
                c++;
        }
        if( c == r+1) // r+1 bc r starts from 0
            res++;
    }
    cout<<res;
    return 0;
}
