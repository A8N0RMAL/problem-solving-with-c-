#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    string s;
    int f=0;
    while(cin>>s)
    {
        reverse(s.begin(),s.end());
        if(f)
            cout<<" ";
        f=1;
        cout<<s;
    }
    return 0;
}
