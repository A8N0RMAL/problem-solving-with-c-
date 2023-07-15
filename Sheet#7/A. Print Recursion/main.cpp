#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
void prt(int x)
{
    if(x==0)
        return;
    cout<<"I love Recursion\n";
    x--;
    prt(x);
}
int main()
{
    int n;
    cin>>n;
    prt(n);
    return 0;
}
