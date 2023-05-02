#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    int n;
	cin>>n;
	int arr[n][n];
	for(int i=0;i<n;i++){
		for(int z=0;z<n;z++){
			cin>>arr[i][z];
		}
	}
	long long s=0,ss=0;
	for(int i=0;i<n;i++){
		for(int z=0;z<n;z++){
			if(i == z)
                s+=arr[i][z];
            if(n-z-1 == i)
                ss+=arr[i][z];
		}
	}
	cout<<abs(s-ss)<<endl;
    return 0;
}
