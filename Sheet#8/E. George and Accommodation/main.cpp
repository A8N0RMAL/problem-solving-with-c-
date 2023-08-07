#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    int t,x,y,c=0;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(y-x>=2)
            c++;
    }
    cout<<c;
    return 0;
}
