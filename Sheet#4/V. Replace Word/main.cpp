#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    eg: string s;
    cin>>s;
    // str1.replace(position,length,str2);
    int x,f=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='E' && s[i+1]=='G' && s[i+2]=='Y'&&s[i+3]=='P'&&s[i+4]=='T')
        {
            x=i;
            f=1;
            //break;
        }
        if(f)
            s.replace(x,5," ");
        f=0;
    }
    cout<<s<<endl;
    return 0;
}
