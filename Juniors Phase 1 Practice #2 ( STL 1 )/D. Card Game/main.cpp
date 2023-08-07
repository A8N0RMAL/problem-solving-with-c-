#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define ye  "YES\n"
#define no  "NO\n"
#define all(v) v.begin(), v.end()
using namespace std;

int main()
{
    fast;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string sm,sa,sr;
    cin>>sm>>sa>>sr;
    reverse(all(sm));
    reverse(all(sa));
    reverse(all(sr));
    /*
    mrm     mrm     muhammed
    mrrr    rrrm    ali
    rm      mr      radi
    */
    int t=0; // 0->m    1->a    2->r
    while(true)
    {
        if(t == 0) // Muhammed
        {
            if(sm.empty())
            {
                cout<<"M";
                return 0;
            }
            char temp = sm[sm.size()-1];
            sm.pop_back();
            t = (temp == 'm') ? 0 : (temp == 'a') ? 1 : 2;
        }
        else if(t == 1) // Ali
        {
            if(sa.empty())
            {
                cout<<"A";
                return 0;
            }
            char temp = sa[sa.size()-1];
            sa.pop_back();
            t = (temp == 'm') ? 0 : (temp == 'a') ? 1 : 2;
        }
        else if(t == 2) // Rady
        {
            if(sr.empty())
            {
                cout<<"R";
                return 0;
            }
            char temp = sr[sr.size()-1];
            sr.pop_back();
            t = (temp == 'm') ? 0 : (temp == 'a') ? 1 : 2;
        }
    }
    return 0;
}
