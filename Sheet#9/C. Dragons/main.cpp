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

    vector<pair<int,int>> dr;
    long long initEG,num,enD,accEN;
    cin>>initEG>>num; // 90 3
    for(int i=0; i<num; i++)
    {
        cin>>enD>>accEN; // 100 100    10 5     20 10
        dr.push_back(make_pair(enD,accEN));
    }
    sort(dr.begin(),dr.end());
    //               enD accEN
    // vec<pair>[] = [{10, 5},{20, 10},{100, 100}]
    int f=1;
    for(int i=0; i<num; i++)
    {
        if(initEG > dr[i].first) // enD
            initEG+=dr[i].second; // accEN
        else
        {
            f=0;
            break;
        }
    }
    if(f)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
