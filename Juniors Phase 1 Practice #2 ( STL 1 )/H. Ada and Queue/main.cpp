#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define ye  "YES\n"
#define no  "NO\n"
#define all(v) v.begin(), v.end()
using namespace std;
void printback(deque<int>&q)
{
    while(!q.empty())
    {
        cout<<q.back()<<" ";
        q.pop_back();
    }
    cout<<"\n";
}
void printfront(deque<int>&q)
{
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop_front();
    }
    cout<<"\n";
}
int main()
{
    fast;
    ll t;
    cin>>t;
    deque<int> deq;
    while(t--)
    {
        string s;
        ll n;
        cin>>s;
        if(s == "toFront" || s == "push_back")
            cin>>n;
        if(s == "toFront")
            deq.push_front(n);
        else if(s == "push_back")
            deq.push_back(n);
        else if(s == "front")
        {
            if(deq.empty())
                cout<<"No job for Ada?\n";
            else
            {
                cout<<deq.front()<<"\n";
                deq.pop_front();
            }
        }
        else if(s == "back")
        {
            if(deq.empty())
                cout<<"No job for Ada?\n";
            else
            {
                cout<<deq.back()<<"\n";
                deq.pop_back();
            }
        }
        else
            reverse(deq.begin(),deq.end());
    }
    return 0;
}
