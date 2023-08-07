#include<bits/stdc++.h>
using namespace std;
int main()
{
    int lucky[12]= {4,7,44,47,47,444,447,474,477,777,774,744};
    int num;
    cin>>num;
    for(int i=0; i<12; i++)
    {
        if(num % lucky[i] == 0)
        {
            cout<<"YES"<<endl;;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
