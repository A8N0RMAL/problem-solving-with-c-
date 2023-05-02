#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            cin>>arr[i][j];
    }
    int s;
    cin>>s;
    int f=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            if(arr[i][j] == s)
            {
                f=1;
                break;
            }
    }
    if(f)
        cout<<"will not take number\n";
    else
        cout<<"will take number\n";
    return 0;
}
