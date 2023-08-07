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
    int r,c;
    cin>>r>>c;
    int arr1[r]= {},arr2[c]= {};
    for(int i=0; i<r; i++)
    {
        string s;
        cin>>s;
        for(int j=0; j<c; j++)
        {
            if(s[j]=='S')
            {
                arr1[i]=1;
                arr2[j]=1;
            }
        }
    }
    int x=0;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(arr1[i]==0 || arr2[j]==0)
                x++;
        }
    }
    cout<<x;
    return 0;
}
