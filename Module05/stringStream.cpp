#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream g(s);
    string word;
    // g>>word;
    // cout<<word<<endl;
    // g>>word;
    // cout<<word<<endl;

    while (g>>word)
    {
        cout<<word<<endl;
    }
    
    return 0;

}