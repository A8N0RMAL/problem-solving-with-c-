#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define ye  "YES\n"
#define no  "NO\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)cin>>arr[i];
    bool f=1;
    for(int i=0; i<n; i++)
    {
        double x=(double)arr[i]/2;
        if(arr[i] % 2 == 0)
            arr[i]/=2;
        else
        {
            if(f)
            {
                arr[i]=ceil(x);
                f=0;
            }
            else
            {
                arr[i]=floor(x);
                f=1;
            }
        }
    }
    for(int i=0; i<n; i++)cout<<arr[i]<<"\n";
    return 0;
}
