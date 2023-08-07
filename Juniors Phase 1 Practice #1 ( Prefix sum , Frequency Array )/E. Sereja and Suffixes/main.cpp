#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void fast()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
}
int main()
{
    fast();
    c(n);c(m);
    ll arr[n],freq[100005]={};
    ll sfx[n+1]={};
    for(int i=0;i<n;++i)cin>>arr[i];
    for(int i=n-1;i>=0;--i)
    {
        freq[arr[i]]++;
        // 1 2 3 4 1 2 3 4 100000 99999
        // 2 2 2 2 1 1 1 1   1      1
        if(freq[arr[i]] == 1)
            sfx[i]=1;
        // 0 1 2 3 4 5 6 7 8 9
        // 0 0 0 0 1 1 1 1 1 1
    }
    for(int i=n-2;i>=0;--i)
        sfx[i]+=sfx[i+1];
        // 0 1 2 3 4 5 6 7 8 9
        // 6 6 6 6 6 5 4 3 2 1
    while(m--)
    {
        c(x);
        cout<<sfx[x-1]<<"\n";
    }
    return 0;
}
