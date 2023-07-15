#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int x;
void prt(int n)
{
    if(n==0)
        return;
    prt(n-1);
    for(int i=1; i<=x-n; i++)
        cout<<" ";
    for(int i=1; i<=2*n-1; i++)
        cout<<"*";
    cout<<"\n";
}
/*
no. line*2-1 = no. stars
4
   *		1	1*2-1=1
  ***		2	2*2-1=3
 *****	3	3*2-1=5
*******	4	4*2-1=7

no. spaces = n-no. line
4
   *		4-1=3
  ***		4-2=2
 *****	4-3=1
*******	4-4=0

*/
int main()
{
    int n;
    cin>>n;
    x=n;
    prt(x);
    return 0;
}
