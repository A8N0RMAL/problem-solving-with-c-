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
    int x;
    cin>>x;
        for(int i=0;i<n;i++)
        {
            if(x == arr[i])
            {
                cout<<i<<endl;
                return 0;
            }
        }
            cout<<-1<<endl;
    return 0;
}
