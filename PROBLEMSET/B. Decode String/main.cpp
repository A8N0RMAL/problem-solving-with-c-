#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
/*
void fast()
{
    cin.tie(0);
    cout.sync_with_stdio(0);
}
*/
int main()
{
    //fast();
    int t;
    cin>>t;
    while(t--)
    {
        string s,str;
        int n;
        cin>>n>>s;
        for(int i=n-1; i>=0; i--) //315045
        {
            string a="";
            if(s[i]='0')
            {
                a+=s[i-2];
                a+=s[i-1];
                i-=2;
            }
            else
                a+=s[i];
            int r=stoi(a);  //stoi function converts string to int
            r--;
            char c=(r+'a');
            str+=c;
        }
        reverse(str.begin(),str.end());
        cout<<str<<endl;
        str="";
    }
    return 0;
}
