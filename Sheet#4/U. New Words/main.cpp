#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    string s;
    cin>>s;
    int e=0,g=0,y=0,p=0,t=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='e' || s[i]=='E')
            e++;
        if(s[i]=='g' || s[i]=='G')
            g++;
        if(s[i]=='p' || s[i]=='P')
            p++;
        if(s[i]=='y' || s[i]=='Y')
            y++;
        if(s[i]=='t' || s[i]=='T')
            t++;
    }
    int x=min(e,g);
    int z=min(y,p);
    int mn=min(min(x,z),t);
    cout<<mn<<endl;
    return 0;
}
