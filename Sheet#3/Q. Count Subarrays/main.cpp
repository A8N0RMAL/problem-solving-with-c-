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
        int n, c=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(arr[j] >= arr[j-1])
                    c++;
                else
                    break;
            }
        }
        cout<<c+n<<endl;
    }
    return 0;
}
