#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    double x,y,z;
    cin>>x>>y>>z;
    if(x+y>z && x+z>y &&y+z>x)
    {
        cout<<"Valid\n";
        double s=x+y+z;
        cout<<fixed<<setprecision(6)<<sqrt((s/2)*(s/2-x)*(s/2-y)*(s/2-z));
    }
    else
        cout<<"Invalid"<<"\n";
    return 0;
}
