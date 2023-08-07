#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> v;
    vector<int> vmx;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
        vmx.push_back(x);
    }
    sort(vmx.begin(),vmx.end(),greater<int>());
    long long sum=0;
    for(int i=0; i<k; i++) // 5 4 2 6 5 1 9 2
        sum+=vmx[i]; // 9 6 5 5 4 2 2 1
    cout<<sum<<"\n";

    int c=0;
    vector<int> res;
    for(int i=0; i<n; i++) // 5 4 2 6 5 1 9 2
    {
        for(int j=0; j<k; j++) // 9 6 5 5 4 2 2 1
        {
            if(v[i] == vmx[j])
            {
                res.push_back(i+1); // i for idx, base 1
                vmx[j]=-1; // equals to erase but erase have high complexity (:
                c++;
                if(c==k)break;
                break;
            }
        }
        if(c==k)break;
    }
    int last=0;
    for(int i = 0 ; i <res.size()-1 ; i ++) // 1 4 7
    {
        // 1     4     7
        // 5 4 2 6 5 1 9 2
        if(i==0)
        {
            cout<<res[i]<<" "; // 1
        }
        else
        {
            cout<<res[i]-res[i-1]<<" "; // 4 - 1 = 3
        }
        if(i==res.size()-2)last=res[i]; // when we reach z end of vector then z last idx = last
    }
    cout<<n-last;
    return 0;
}
