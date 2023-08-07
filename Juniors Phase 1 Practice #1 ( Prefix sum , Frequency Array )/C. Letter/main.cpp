#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    string s1,s2,s;
    getline(cin,s1);
    getline(cin,s2);
    long long arr[200]= {};
    char space = ' ';
    for(long long i=0; i<s1.size(); i++)
    {
        arr[s1[i]]++;
    }
    for(long long i=0; i<s2.size(); i++)
    {
        if(!(s2[i]==space))
            s+=s2[i];
    }
    long long c=0;
    for(long long i=0; i<s.size(); i++)
    {
        if(arr[s[i]] > 0)
        {
            arr[s[i]]--;
            c++;
        }
        else
        {
            cout<<"NO\n";
            return 0;
        }
    }
    if(c==s.size())
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
