#include<bits/stdc++.h>
using namespace std;

int main()
{
    // string c;
    // c="hello";
    // cout<<c.size()<<endl;
    // cout<<c.max_size()<<endl;
    // cout<<c.capacity()<<endl;
    // cout<<c<<endl;
    // c="hum tum ek kamre me band ho";
    // cout<<c.capacity()<<endl;
    // cout<<c.size()<<endl;

    string c="hello";
    cout<<c.size()<<endl;
    // c.clear();
    cout<<c.size()<<endl;

    if(c.empty()==true)
    {
        cout<<"string is empty"<<endl;
        
    }
    else
    {
        cout<<"string is not emopty"<<endl;
    }

    c.resize(3);
    cout<<c<<endl;
    return 0;
}