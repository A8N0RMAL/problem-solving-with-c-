#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
double arr[100];
int n;
double avg(int idx, double s)
{
    if(idx==n)
        return s/n;
    return avg(idx+1,s+arr[idx]);
}
/*
    n = 5
idx 0 1 2 3 4
    1 2 3 4 5
   idx val	s
    0	1	1
    1	2	3
    2	3	7
    3	4	10
    4	5	15
    5   idx==n	then return s/n = 15/5;
*/
int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<fixed<<setprecision(6)<<avg(0,0)<<endl;
    return 0;
}
