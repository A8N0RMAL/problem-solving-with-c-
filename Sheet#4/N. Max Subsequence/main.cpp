#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(s[i] != s[i+1])
            c++;
    }
    cout<<c<<endl;
    return 0;
}
