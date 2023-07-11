#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    double x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    double d1=x1-x2,d2=y1-y2;
    double s=sqrt((d1*d1)+(d2*d2));
    cout<<fixed<<setprecision(9)<<s;
    return 0;
}
