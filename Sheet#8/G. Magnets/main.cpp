#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    int n,c=1;
    cin>>n;
    string s;
    for(int i=0; i<n; i++)
    {
        string ss;
        cin>>ss;
        if(i == 0)
        {
            s = ss;
            continue;
        }
        if(s[1] == ss[0])
            c++;
        s = ss;
    }
    cout<<c;
    return 0;
}
