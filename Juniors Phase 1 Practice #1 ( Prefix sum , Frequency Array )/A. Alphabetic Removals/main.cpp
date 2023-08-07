#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    int s,rs;
    string str;
    cin>>s>>rs>>str;
    int a='a',b='z';
    for(int i=a; i<=b; i++)
    {
        for(int j=0; j<s; j++)
        {
            if(rs==0)
                break;
            if(str[j]==i)
            {
                str[j]=' ';
                rs--;
            }
        }
    }
    for(int i=0; i<s; i++)
    {
        if(str[i]!=' ')
            cout<<str[i];
    }
    return 0;
}
