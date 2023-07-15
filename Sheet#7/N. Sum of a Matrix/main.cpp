#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int r,c,arr[100][100],brr[100][100],crr[100][100];
void sum(int r1, int c1)
{
    if(r1==r || c1==c)
        return;
    if(c1<c-1)
        sum(r1,c1+1);
    else
        sum(r1+1,0);
    crr[r1][c1]=arr[r1][c1]+brr[r1][c1];
}
int main()
{
    cin>>r>>c;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
            cin>>arr[i][j];
    }
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
            cin>>brr[i][j];
    }
    sum(0,0);
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
            cout<<crr[i][j]<<" ";
        cout<<"\n";
    }
    return 0;
}
