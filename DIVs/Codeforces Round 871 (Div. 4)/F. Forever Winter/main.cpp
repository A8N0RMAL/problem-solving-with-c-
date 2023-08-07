#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
ll isSafe(ll n, ll m, ll r, ll c, vector < vector < ll > >& matrix, vector < vector < ll > >&vis)
{
    if(r >= 0 and r < n and c >=0 and c < m)
    {
        return (matrix[r][c] and !vis[r][c]);
    }
    else
        return 0;
}
ll traverse(ll n, ll m, ll r, ll c, vector < vector < ll > >&matrix, vector < vector < ll > >&vis)
{
    static ll ro[4] = {-1,1,0,0};
    static ll co[4] = {0,0,-1,1};
    ll sum = 0;
    for(ll k = 0 ; k < 4; k++)
    {

        if(isSafe(n,m,r+ro[k],c+co[k],matrix,vis))
        {
            vis[r+ro[k]][c+co[k]] = 1;
            sum += matrix[r+ro[k]][c+co[k]]+traverse(n,m,r+ro[k],c+co[k],matrix,vis);
        }
    }
    return sum;
}
int main()
{
    ios;
#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("/Users/sreejith/Desktop/output.txt", "w", stdout);
#endif
    ll t;
    cin>>t;

    while(t--)
    {
        ll ver,edg,u,v;
        cin>>ver>>edg;
        map < ll, ll > ma,count;
        map < ll, vector < ll > > adj;
        set < ll >se;
        for(ll i = 0 ; i < edg ; i++)
        {
            cin>>u>>v;
            ma[u]++;
            ma[v]++;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        map < ll, ll >::iterator it;
        ll maxi = 0;
        for(it = ma.begin(); it!=ma.end(); it++)
        {
            if(it->second == 1)
            {
                vector < ll > v = adj[it->first];
                for(ll i = 0 ; i < (ll)v.size() ; i++)
                {
                    count[v[i]]++;
                    maxi = max(maxi,count[v[i]]);
                }
            }
            else
            {

            }
        }

        cout<<count.size()<<" "<<maxi<<endl;

    }
    return 0;
}
