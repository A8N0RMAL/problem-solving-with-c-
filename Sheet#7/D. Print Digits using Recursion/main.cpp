#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int idx=0;
void prt(string s)
{
    if(idx==s.size())
        return;
    cout<<s[idx]<<" ";
    idx++;
    return prt(s);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        prt(s);
        cout<<"\n";
        idx=0;
    }
    return 0;
}
