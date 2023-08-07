#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define ye  "YES\n"
#define no  "NO\n"
#define all(v) v.begin(), v.end()
using namespace std;
void printfront(deque<char> q)
{
    while(!q.empty())
    {
        cout<<q.front();
        q.pop_front();
    }
    cout<<"\n";
}
int main()
{
    fast;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin>>s; // hhoowaaaareyyoouu
    deque<char> de;
    de.push_back(s[0]); // h
    for(int i=1; i<s.size(); ++i)
    {
        if(de.empty())
            de.push_back(s[i]);
        else if(de.back() == s[i])
            de.pop_back();
        else
            de.push_back(s[i]);
    }
    //for(int i=0; i<s.size(); ++i)
    //  cout<<de[i];
    printfront(de);
    return 0;
}
