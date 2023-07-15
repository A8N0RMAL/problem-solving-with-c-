#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
/*
void prt(string s)
{
    if(x==0)
        return;

}
*/
/*
int vowel(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}
int check(string s, int x)
{
    if(x-1==0)
        return vowel(s[x-1]);
    return vowel(s[x-1])+check(s,x-1);
}
*/
int vowel(string s, int idx)
{
    // fun will continue until it reaches NULL character
    if(s[idx]=='\0')
        return 0;
    int c=0;
    if(s[idx] == 'a' || s[idx] == 'e' || s[idx] == 'i' || s[idx] == 'o' || s[idx] == 'u' ||
            s[idx] == 'A' || s[idx] == 'E' || s[idx] == 'I' || s[idx] == 'O' || s[idx] == 'U')
        c=1;
    return c+vowel(s,idx+1);
}
int main()
{
    string s;
    getline(cin,s);
    //int x=s.size();
    //cout<<check(s,x);
    cout<<vowel(s,0);
    return 0;
}
