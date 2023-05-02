#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        int f=0;
        for(int i=0;i<n;i++)
        {
            if( (s[i]-'0' == 0 && s[i+1]-'0' == 1 && s[i+2]-'0' == 0) || (s[i]-'0' == 1 && s[i+1]-'0' == 0 && s[i+2]-'0' == 1))
            {
                f=1;
                break;
            }
        }
        if(f)
            cout<<"Good\n";
        else
            cout<<"Bad\n";
    }
    return 0;
}
