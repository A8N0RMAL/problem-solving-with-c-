#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        char c=s[i];
        int counter=1;
        while(s[i]==s[++i])
            counter++;
        i--;
        cout<<c<<" : "<<counter<<endl;
    }
    return 0;
}
