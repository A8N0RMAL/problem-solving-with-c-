#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define ye  "YES\n"
#define no  "NO\n"
using namespace std;

int main()
{
    fast;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;;
    cin>>s;
    ll openright=0,c=0;
    for(int i=0; i<s.size(); ++i)
    {
        if(s[i] == '(')
            ++openright;
        else if(s[i] == ')' && openright)
        {
            --openright;
            c++;
        }
    }
    cout<<c*2;
    return 0;
}
