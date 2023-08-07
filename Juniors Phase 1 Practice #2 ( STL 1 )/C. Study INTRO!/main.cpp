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

    ll t,f=1,c=0;
    cin>>t;
    stack<string> s;
    while(t--)
    {
        string str;
        cin>>str;
        if(f && str != "Header")    // first str != Header then return WA
        {
            cout<<"WA";
            return 0;
        }
        f=0;
        if(str == "Header")
            ++c;
        if(c > 1)   // Header has to appear only one time
        {
            cout<<"WA";
            return 0;
        }
        if(s.empty())
            s.push(str);
        else
        {
            if(str == "End"+s.top())
                s.pop();
            else
                s.push(str);
        }
    }
    if(s.empty())
        cout<<"ACC";
    else
        cout<<"WA";
    return 0;
}
