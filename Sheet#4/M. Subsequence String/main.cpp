#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    string s;
    cin>>s;
    int c=0,j=0;
    char h[]={"hello"};
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==h[j])
            j++,c++;
    }
    if(c==5)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
