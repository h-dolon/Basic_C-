#include<bits/stdc++.h>
using namespace std;
int * fun()
{
    // int *p =new int;
    // *p=10;
    
    // return p;




    int a=5;
    return &a;
}
int main()
{
    int *a=fun();
    // cout<<*a<<endl;
    cout<<a;

}