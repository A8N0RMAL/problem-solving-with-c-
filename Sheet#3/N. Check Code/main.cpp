#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    if(a+b+1 != s.size())
    {
        cout<<"No\n";
        return 0;
    }
    if(s[a] != '-')
    {
        cout<<"No\n";
        return 0;
    }
    int c=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>=48 && s[i]<=57 && i != a)
            c++;
    }
    if(c == a+b)
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0;
}
