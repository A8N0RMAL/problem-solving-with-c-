#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    long long n;
    cin>>n;
    bool prime=true;
    if(n==0 || n==1)
        prime=false;;
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            prime=false;
            break;
        }
    }
    if(prime)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
