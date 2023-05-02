#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size,query;
    cin>>size>>query;
    string val;
    cin>>val;
    string qu;
    int s1,s2;
    while(query--)
    {
        cin>>qu;
        if(qu == "pop_back")
            {
                val.pop_back();
            }
        else if (qu == "front")
            {
                cout<<val.front()<<endl;
            }
        else if (qu == "back")
            {
                cout<<val.back()<<endl;
            }
        else if (qu == "sort")
            {
                cin>>s1>>s2;
                sort(val.begin()+min(s1,s2)-1,val.begin()+max(s1,s2));
            }
        else if (qu == "reverse")
            {
                cin>>s1>>s2;
                reverse(val.begin()+min(s1,s2)-1,val.begin()+max(s1,s2));
            }
        else if (qu == "print")
            {
                int pos;
                cin>>pos;
                cout<<val[pos-1]<<endl;
            }
        else if (qu == "substr")
            {
                cin>>s1>>s2;
                for(int i=min(s1,s2)-1;i<=max(s1,s2)-1;i++){
                    cout<<val[i];
                }
                cout<<endl;
            }
        else
        {
            char c;
            cin>>c;
            val.push_back(c);
        }
    }
    return 0;
}
