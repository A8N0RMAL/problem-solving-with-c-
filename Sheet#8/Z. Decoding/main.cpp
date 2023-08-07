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

    int n;
    string s;
    cin>>n>>s;
    int i=0;
    string res="";
    while(n)
    {
        if(n%2 == 0)
            res=s[i]+res;
        else
            res=res+s[i];
        i++,n--;
    }
    cout<<res;
    return 0;
}
