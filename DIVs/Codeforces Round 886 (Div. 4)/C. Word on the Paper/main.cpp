#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;


int main()
{
    fast;
    int t;
    cin>>t;

    while(t--)
    {
        char arr[8][8];
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
                cin>>arr[i][j];
        }
        //int arr[8][8];
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                if(arr[i][j]>=97 && arr[i][j]<=122)
                    cout<<arr[i][j];
            }
        }
        cout<<"\n";
    }
    return 0;
}
