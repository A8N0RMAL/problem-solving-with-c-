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

    int s;
    cin>>s;
    /*
    5       key   value
    A   foot[A] = 1
    ABA foot[ABA] = 1
    ABA foot[ABA] = 2
    A   foot[A] = 2
    A   foot[A] = 3
    */
    //  key   ,value
    map<string,int> foot;
    for(int i=0; i<s; i++)
    {
        string key;
        cin>>key;
        if(foot[key] == 0) // not in map (appeared for Z first time)
            foot[key]=1;
        else
            foot[key]++;
    }

    // loop for map to find the most frequent string.
    map<string,int>::iterator lpmap;
    string reskey = foot.begin()->first; // A
    int resvalue = foot.begin()->second; // 1
    // loop starting with first key&val
    for(lpmap = foot.begin(); lpmap != foot.end(); lpmap++)
    {
        //                    value
        if(resvalue < lpmap->second)
        {
            reskey = lpmap->first;
            resvalue = lpmap->second;
        }
    }
    cout<<reskey;
    return 0;
}
