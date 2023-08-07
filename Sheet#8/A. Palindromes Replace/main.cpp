#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
bool check(string w)
{
    int s=w.size()/2;
    bool res=true;
    for(int i=0,j=w.size()-1; i<s; i++,j--)
    {
        if(w[i]==w[j] || (w[i]=='?' && w[j]!='?') ||(w[j]=='?' && w[i]!='?') || w=="?")
            res = true;
        else
        {
            res = false;
            break;
        }
    }
    return res;
}
int main()
{
    string word;
    cin>>word;
    int s=word.size()/2;
    if(word != "?")
    {
        if(check(word))
        {
            for(int i=0,j=word.size()-1; i<=s; i++,j--)
            {
                if(word[i]=='?' && word[j]!='?')
                    word[i]=word[j];
                else if(word[i]!='?' && word[j]=='?')
                    word[j]=word[i];
                else if(word[i]=='?' && word[j]=='?')
                {
                    word[i]='a';
                    word[j]='a';
                }
            }
            cout<<word;
        }
        else
            cout<<-1; // if not palindrome
    }
    else
    {
        cout<<"a\n"; // if word == ?
    }
    return 0;
}
