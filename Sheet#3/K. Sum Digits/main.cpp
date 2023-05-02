#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    int n,ss=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
        ss+=s[i]-'0';
    cout<<ss<<endl;
    return 0;
}
