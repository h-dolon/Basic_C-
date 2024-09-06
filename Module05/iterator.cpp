#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string::iterator it;
    cin>>s;
    // cout<<*s.begin()<<endl;
    // cout<<*s.end()<<endl;
    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout<<s[i]<<endl;
    // }

    for ( it=s.begin(); it < s.end(); it++)
    {
        cout<<*it<<endl;
    }
    
    
    return 0;

}