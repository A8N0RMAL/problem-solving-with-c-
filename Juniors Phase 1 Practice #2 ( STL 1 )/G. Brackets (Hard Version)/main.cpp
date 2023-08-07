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

    string str;
    cin>>str;
    stack<char> s;
    for(int i=0; i<str.size(); ++i)
    {
        if(str[i] == '(' || str[i] == '[' || str[i] == '{')
            s.push(str[i]);
        else
        {
            if(s.size() == 0)   // )()  ) -> will make stack size = 0
            {
                cout<<"no";
                return 0;
            }
            if(str[i] == ')')
            {
                if(s.top() == '(')
                    s.pop();
                else
                {
                    cout<<"no";
                    return 0;
                }
            }
            if(str[i] == ']')
            {
                if(s.top() == '[')
                    s.pop();
                else
                {
                    cout<<"no";
                    return 0;
                }
            }
            if(str[i] == '}')
            {
                if(s.top() == '{')
                    s.pop();
                else
                {
                    cout<<"no";
                    return 0;
                }
            }
        }
    }
    if(s.empty())
        cout<<"yes";
    else
        cout<<"no";
    return 0;
}
