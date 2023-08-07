#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int aa[5005],bb[5005];
int main()
{
    /*
        aabbbbbaaa
    aa  1100000000111
    pa  1222222222345

    bb  0011111111000
    pb  0012345678888

    loop(i : n)
        loop(j : n) // j=i
                0  i   j  n
            a = aaa*****aaa
            b = ***bbbbb***
            aaaa(i : j)aaaa
            x= pb[j] - pb[i]
            y= pa[n] - pa[j] + pa[i]
            get max of x+y
    */
    string s;
    cin>>s;
    s='#'+s;
    int mx=0;
    int n=s.size();
    for(int i=1; i<n; i++)
    {
        if(s[i]=='a')aa[i]++;
        else bb[i]++;
    }
    for(int i=1; i<=n; i++)
    {
        aa[i]+=aa[i-1];
        bb[i]+=bb[i-1];
    }
    for(int i=0; i<=n; i++)
    {
        for(int j=i; j<=n; j++)
        {
            int a=aa[n]-aa[j]+aa[i];
            int b=bb[j]-bb[i];
            mx=max(a+b,mx);
        }
    }
    cout<<mx;
    return 0;
}
