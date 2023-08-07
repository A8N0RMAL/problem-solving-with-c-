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
    string word;
    cin>>word;
    int s=word.size();
    int p=s-1;
    bool pli=1;
    for(int i=0; i<s; i++)
    {
        if(word[i] != word[p])
        {
            pli=0;
            //break;
        }
        p--;
    }
    if(pli == 0)
    {
        cout<<s;
        return 0;
    }

    ll arr[10000];
    for(int i=0; i<s; i++)
        arr[word[i]]++; // freq arr for counting no. of chars
    ll res=0;
    for(int i='a'; i<='z'; i++)
    {
        if(arr[i]>0)
            res++;
    }
    if(res == 1)
        cout<<0;
    else
        cout<<s-1; // z biggest subseq.
    return 0;
}
