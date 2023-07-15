#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
/*int KnapSack(int w, int weight[], int value[], int c)
{
    if(w==0|| c==0)
        return 0;
    if((weight[c-1])>w)
        return KnapSack(w,weight,value,c-1);
    else
    {
        return max(value(c-1)+KnapSack(w-weight[c-1],weight,value,c-1) // 5-->60 + 8-5=3-->30 = 90
                   , KnapSack(w,weight,value,c-1)); // 4-->50 + 3-->30 = 80
    }
}*/
int KS(int c,int w,int weight[],int val[])
{
    if(w == 0 || c == 0)
        return 0;
    if(weight[c-1] > w)
        return KS(c-1, w, weight, val); // 9 40   9>8 x --> weight>w x
    else{
        return max(val[c-1]+KS(c-1, w-weight[c-1], weight, val), // 5-->60 + 8-5=3-->30 = 90
                   KS(c-1, w, weight, val)); // 4-->50 + 3-->30 = 80
    }
}
/*
    c w
	3 8
	we val
	3  30
	4  50
	5  60

	9 40   9>8 x --> weight>w x
*/
int main()
{
    int c,W;
    cin>>c>>W;
    int weight[c],val[c];
    for(int i=0; i<c; i++)
        cin>>weight[i]>>val[i];
    cout<<KS(c, W, weight, val)<<"\n";
    return 0;
}
