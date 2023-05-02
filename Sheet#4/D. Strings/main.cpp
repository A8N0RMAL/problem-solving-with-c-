#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    string s,ss;
    cin>>s>>ss;
    cout<<s.size()<<" "<<ss.size()<<endl;
    cout<<s+ss<<endl;
    char temp=s[0];
    s[0]=ss[0];
    ss[0]=temp;
    cout<<s<<" "<<ss<<endl;
    return 0;
}
