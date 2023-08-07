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

    string scale,task,left,right;
    cin>>scale;
    int cross = scale.find('|'); // return idx of |     AC|T 2
    left = scale.substr(0,cross);// AC
    right = scale.substr(cross+1);// T   it also = scale.substr(cross+1,scale.size())
    cin>>task;
    for(auto pointer : task) // pointer for elements in task it also = *arr+1, then *arr+1+1, then *arr+1+1+1 and so on...
        if(left.size() <= right.size()) left+=pointer;
        else right+=pointer;
    cout<<(left.size() == right.size() ? left+"|"+right : "Impossible\n");
    return 0;
}
