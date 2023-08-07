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

    int r,c,op;
    cin>>r>>c>>op;
    //++r,++c;
    int arr[r+1][c+1];
    for(int i=1; i<=r; i++)
    {
        for(int j=1; j<=c; j++)
            cin>>arr[i][j];
    }
    int aRR[r+1],aCC[c+1];
    for(int i=1; i<=r; i++)
        aRR[i]=i; // for row idx
    for(int i=1; i<=c; i++)
        aCC[i]=i; // for col. idx
    while(op--)
    {
        char x;
        cin>>x;
        int a,b;
        cin>>a>>b;
        if(x == 'g')
        {
            int row=aRR[a],col=aCC[b];
            cout<<arr[row][col]<<"\n";
        }
        else if(x == 'r')
            swap(aRR[a],aRR[b]);
        else if(x == 'c')
            swap(aCC[a],aCC[b]);
    }
    return 0;
}
