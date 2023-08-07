#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s1="qwertyuiopasdfghjkl;zxcvbnm,./",s2,s3;
    char c;
    cin>>c>>s2;
    for(int i=0; i<s2.size(); i++)
    {
        int idx=s1.find(s2[i]);
        if(c == 'R')
            s3+=s1[idx-1];
        else
            s3+=s1[idx+1];
    }
    cout<<s3;
    return 0;
}
