#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    string Key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int q;
    cin>>q;
    string s;
    cin>>s;
    int ss=s.size();
    int j=0;
    if(q == 1)
    {
        for(int i=0; i<ss; i++)
        {
            for( j=0; j<Original.size(); j++)
            {
                if(s[i]==Original[j])
                {
                    break;
                }
            }
            cout<<Key[j];
        }
    }
    else
    {
        for(int i=0; i<ss; i++)
        {
            for( j=0; j<Key.size(); j++)
            {
                if(s[i]==Key[j])
                {
                    break;
                }
            }
            cout<<Original[j];
        }
    }
    return 0;
}
