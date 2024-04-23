#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string Key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    int q;
    cin>>q;

    string s;
    cin>>s;
    int z;

    int size=s.size();
    if(q==1)
    {
        for(int i=0;i<size;++i)
        {
            for(z=0; z<Original.size();++z)
            {
                if(s[i] == Original[z])
                    break;
            }
            cout<<Key[z];
        }
    }
    else
    {
        for(int i=0;i<size;++i)
        {
            for(z=0; z<Original.size();++z)
            {
                if(s[i] == Key[z])
                    break;
            }
            cout<<Original[z];
        }
    }
    return 0;
}
