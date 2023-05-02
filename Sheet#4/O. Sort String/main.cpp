#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[26]={};
    for(int i=0;i<n;i++)
    {
        char c;
        cin>>c;
        arr[(int)c-97]++;
    }
    for(int i=0;i<26;i++)
    {
        while(arr[i]!=0)
        {
            cout<<(char)(i+97);
            arr[i]--;
        }
    }
    return 0;
}
