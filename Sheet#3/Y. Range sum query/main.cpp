#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    /*
    6 3
    6 4 2 7 2 7
    1 3
    3 6
    1 6
    */
    long long n,q;
    cin>>n>>q;
    // 6 3
    long long arr1[n],arr2[n];
    for(int i=0;i<n;i++)
    {
        // 0 1 2 3 4 5
        // 6 4 2 7 2 7
        cin>>arr1[i];
        if(i==0)
            arr2[i]=arr1[i]; // arr2--> 6
        else
            arr2[i]=arr1[i]+arr2[i-1]; // arr2--> 6 10 12 19 21 28
    }
    while(q--)
    {
        long long s,e;
        cin>>s>>e;
        // 1 3
        // 3 6
        // 1 6
        s--,e--;
        // 0 2 ---> 6 4 2 ---> 12 - 6 + 6 = 12
        // 2 5 ---> 2 7 2 7 ---> 28 - 12 + 2 = 18
        // 0 5 ---> 6 4 2 7 2 7 ---> 28 - 6 + 6 = 28
        long long sum=arr2[e]-arr2[s]+arr1[s];
        // 0 1   2  3 4  5
        // 6 10 12 19 21 28
        cout<<sum<<"\n";
    }
    return 0;
}
