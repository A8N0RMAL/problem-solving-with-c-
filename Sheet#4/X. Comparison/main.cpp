#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    string s,sub1="",sub2;
    cin>>s;
    string ss=s,smallstring=s;
    for(int i=0;i<s.size()-1;i++)
    {
        sub1+=s[i];
        ss.erase(0,1);
        sub2=ss;
        sort(sub1.begin(),sub1.end());
        sort(sub2.begin(),sub2.end());
        smallstring=min(smallstring,sub1+sub2);
    }
    cout<<smallstring;
    return 0;
}
