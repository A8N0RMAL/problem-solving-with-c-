#include <iostream>
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
	int t,s=0,mn,f=1;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                s=arr[i-1]+arr[j-1]+(j-i);
                if(f==0 && mn>s)
                {
                    mn=s;
                }
                if(f)
                {
                    mn=s;
                    f=0;
                }
                s=0;
            }
        }
        f=1;
        cout<<mn<<endl;
    }
}
