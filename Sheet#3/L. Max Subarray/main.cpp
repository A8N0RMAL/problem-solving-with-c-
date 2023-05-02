#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int l=0;l<n;l++)
        {
            for(int r=l;r<n;r++)
            {
                int mx=-1e5;
                // 0 1 2 3
                // 1 6 3 7
                for(int k=l;k<=r;k++)
                {
                    // l=0
                    // 1 -> 1   k=0 r=0
                    // 1 6 -> 6 k=0 r=1
                    // 1 6 3 -> 6   k=0 r=2
                    // 1 6 3 7 -> 7 k=0 r=3     n=4 r will be 4=n so l++
                    // l=1
                    // 6 -> 6   k=1 r=1
                    // 6 3 -> 6 k=1 r=2
                    // 6 3 7 -> 7 k=1 r=3
                    // l=2
                    // 3 -> 3   k=2 r=2
                    // 3 7 -> 7 k=2 r=3
                    // l=4
                    // 7 -> 7   k=3 r=3
                    // 1 6 6 7 6 6 3 7 7
                    if(arr[k]>mx)
                        mx=arr[k];
                }
                cout<<mx<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
