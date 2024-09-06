#include<bits/stdc++.h>
using namespace std;
int main()
{
    // string s="hello";
    // string t="world";
    // s=s+t;
    // cout<<s<<endl;
    // cout<<t<<endl;
    // s.append("you");
    // cout<<s<<endl;
    // s.push_back('do');
    // s.pop_back();

    // cout<<s<<endl;

    string a="helloWorld";
    // a.erase(4);
    a.replace(5,0,"34");
    a.insert(5,"dolon");
    cout<<a<<endl;

    return 0;
}