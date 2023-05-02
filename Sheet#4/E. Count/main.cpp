#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    string s;
    cin>>s;
    long long sum=0;
    for(int i=0;i<s.size();i++)
        sum+=(int)s[i]-'0';
    cout<<sum<<endl;
    return 0;
}
