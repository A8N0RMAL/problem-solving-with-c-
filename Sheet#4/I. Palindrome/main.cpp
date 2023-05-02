#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    string s;
    cin>>s;
    int f=1;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=s[s.size()-i-1])
            {
                f=0;
                break;
            }
    }
    if(f)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
