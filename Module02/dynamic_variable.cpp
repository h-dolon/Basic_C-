#include<bits/stdc++.h>
using namespace std;
int * fun()
{
    int* a=new int;
    cout<<"fun: "<<a<<endl;
    *a=100;
    return a;

}

int main()
{
    int *p=fun();
    
    // int *a=new int;
    // *a=10;
    // cout<<a<<endl;
    // cout<<*a<< endl;
    // int* b=fun();
    cout<<"main: "<<*p<<endl;

     
    
}