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

    int arr[100];
    int n;
    cin>>n;
    for(int i=0; i<n; ++i)
        cin>>arr[i];
    bool valid = true;

    // for each no. know how many times repeated
    for(int i=0; i<n; ++i)
    {
        int c=0;
        for(int j=0; j<n; ++j)
        {
            if(arr[i] == arr[j])
                ++c;
        }
        // n must be >=2*c-1 (c -> times for most repeated no.)
        if(n < 2*c-1)
        {
            valid = false;
            break;
        }
    }

    if(valid)
        cout<<ye;
    else
        cout<<no;
    return 0;
}
