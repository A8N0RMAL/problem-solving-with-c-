#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    /*
        012345  idx
        #..###
        001123  c
        dp[0] = 0
        dp[1] = 0
        dp[2] = 1
        dp[3] = 1
        dp[4] = 2
        dp[5] = 3
        5 -> no. quiries
        1 3 dp[2] - dp[0]
        5 6 dp[5] - dp[5]
        1 5 dp[4] - dp[0]
        3 6 dp[5] - dp[2]
        3 4 dp[3] - dp[2]
    */
    int dp[100005];
    string s;
    int q,c=0;
    cin>>s>>q;
    for(int i=1; i<=s.length(); i++)
    {
        if(s[i]==s[i-1])
            c++;
        dp[i]=c;
    }
    int l,r;
    while(q--)
    {
        cin>>l>>r;
        cout<<dp[r-1]-dp[l-1]<<"\n";
    }
    return 0;
}
