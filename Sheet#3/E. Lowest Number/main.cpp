#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int x=arr[0];
    int c=1;
    for(int i=1;i<n;i++)
    {
        if(x>arr[i])
            {
                x=arr[i];
                c=i+1;
            }
    }
    cout<<x<<" "<<c<<endl;
    return 0;
}
