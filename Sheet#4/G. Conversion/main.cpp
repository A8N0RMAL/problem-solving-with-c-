#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==44)
            s[i]=32;
        else if(s[i]<=90 && s[i]>=65)
            s[i]+=32;
        else
            s[i]-=32;
    }
    cout<<s<<endl;
    return 0;
}
