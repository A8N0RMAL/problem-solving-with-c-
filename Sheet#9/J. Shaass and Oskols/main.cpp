#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    /*
      s
      3
      2 4 1
      skill
      1
      boxnum bird
      2 2

    int s,skill,boxnum,bird;
    cin>>s;
    int arr[s];
    for(int i=0; i<s; i++)cin>>arr[i];
    cin>>skill;
    for(int i=0; i<skill; i++)
    {
        cin>>boxnum>>bird; // 2 2
        /*
        boxnum    boxnum    boxnum
        1           2       3
        12        1234      123
        +bird-1             +4-bird
        +2-1        0        +4-2

        arr[boxnum-2]+=bird-1;
        arr[boxnum]+=arr[boxnum-1]-bird;
        arr[boxnum-1]=0;
    }
    for(int i=0; i<s; i++)
        cout<<arr[i]<<"\n";
    */
    const int mx=100;
    int birds[mx];
    int n;
    cin>>n;
    for(int i=0; i<n; i++)cin>>birds[i];

    int m;
    cin>>m;
    for(int i=0; i<m; i++)
    {
        int x,y;
        cin>>x>>y;
        --x; // x input is 1 based. we need it 0-based to access array
        // kill the yth bird in xth position: (y-1, y, a-y)

        if(x != 0)
            birds[x-1]+=y-1; // if there exists no upper wire they fly away, jump up
        if(x != n-1)
            birds[x+1]+=birds[x]-y; // jump down
        birds[x]=0;
    }
    for(int i=0; i<n; i++)
        cout<<birds[i]<<"\n";
    return 0;
}
