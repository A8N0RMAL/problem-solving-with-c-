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
        string s,t;
        cin>>s>>t;
        int n=s.size()+t.size();
        int fs=1,ft=1;
        for(int i=0;i<n;i++)
        {
            if(s.size() != i && fs)
                cout<<s[i];
            else
                fs=0;
            if(t.size() != i && ft)
                cout<<t[i];
            else
                ft=0;
        }
        cout<<endl;
    }
    return 0;
}
