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

    string equ;
    cin>>equ; // 1+2+3 -> s=5 -> s of arr of nums = 5/2 +1=3
    int s=(equ.length()/2)+1; // size of arr of nums
    int arr[s]; // arr for nums
    int c=0; // counter for arr of nums
    for(int i=0; i<equ.length(); i++)
    {
        if(equ[i] == '+')
            continue;
        arr[c] = equ[i] - '0';  // - '0' -> to get int for ascii code char
        c++;
    }
    int n=sizeof(arr)/sizeof(arr[0]); // size of arr
    sort(arr,arr+n);
    for(int i=0; i<s; i++)
    {
        if(i != 0)
            cout<<"+";
        cout<<arr[i];
    }
    return 0;
}
