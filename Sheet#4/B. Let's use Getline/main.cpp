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
        if(s[i]=='\\')
            break;
        cout<<s[i];
    }
    return 0;
}
