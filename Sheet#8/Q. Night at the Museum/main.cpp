#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin>>s;
    int start=97; // a
    int c=0;
    for(int i=0; i<s.size(); i++)
    {
        int res=abs(s[i]-start); // abs if s[i] < start
        if(res <= 13)
            c+=res;
        else
            c+=(26 - res);
        start = s[i];
    }
    cout<<c;
    return 0;
}
