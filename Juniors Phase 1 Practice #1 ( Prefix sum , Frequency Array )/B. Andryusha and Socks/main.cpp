#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    int s;
    cin>>s;
    if(s==1)
    {
        int s0,s1;
        cin>>s0>>s1;
        cout<<1<<"\n";
        return 0;
    }
    int arr[s+1]= {};
    int c=0,mx=0;
    for(int i=0; i<s*2; i++)
    {
        int x;
        cin>>x;
        if(arr[x]==0)
        {
            arr[x]++;
            c++;
            mx=max(c,mx);
        }
        else
            c--;
    }
    cout<<mx<<"\n";
    return 0;
}
