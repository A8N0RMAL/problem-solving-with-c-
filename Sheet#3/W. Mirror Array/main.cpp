#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    int r,c;
    cin>>r>>c;
    while(r--)
    {
        int arr[c]; // arr[row1]..arr[row2]....
        for(int i=0;i<c;i++)
            cin>>arr[i];
        for(int i=c-1;i>=0;i--)
            cout<<arr[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
