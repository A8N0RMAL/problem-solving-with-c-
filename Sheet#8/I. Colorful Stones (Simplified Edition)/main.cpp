#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    // RGB
    // RRR
    string s1,s2;
    cin>>s1>>s2;
    int c=0;
    for(int i=0; i<s2.length(); i++)
    {
        if(s2[i] == s1[c])
            c++;
    }
    cout<<++c;
    return 0;
}
