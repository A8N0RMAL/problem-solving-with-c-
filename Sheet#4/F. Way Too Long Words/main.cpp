#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s.size()<=10)
            cout<<s<<endl;
        else
        {
            cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;
        }
    }
    return 0;
}
