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
    string num;
    cin>>num;
    ll n=stoi(num); // -10982 original num
    string s=num;
    num.erase(num.size()-1,1); // -1098 remove 2
    s.erase(s.size()-2,1); // -1092 remove 8
    ll res = max(n,max((ll)stoi(num),(ll)stoi(s)));
    cout<<res;
    return 0;
}
