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

    int n,f1=0,f2=0,temp=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int n1,n2;
        cin>>n1>>n2;
        if(n1 != n2)
        {
            f1=1;
            break;
        }
        if(temp < n1 && i != 0)
        {
            f2=1;
        }
        temp = n1;
    }
    if(f1)
        cout<<"rated\n";
    else if(f2)
        cout<<"unrated\n";
    else
        cout<<"maybe\n";
    return 0;
}
