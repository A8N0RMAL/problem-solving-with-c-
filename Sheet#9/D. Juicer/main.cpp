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
    int n,over,mx,c=0;
    cin>>n>>over>>mx;
    long long s=0;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        if(x <= over)
            s+=x;
        if(s > mx)
        {
            c++;
            s=0;
        }
    }
    cout<<c;
    return 0;
}
