#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a, b;
    //in c
    // while (scanf("%d %d",&a,&b)!=EOF)
    // {
    //     printf("%d %d\n",a,b);
    // }
    //in c++
    while (cin>>a>>b)
    {
        cout<<a<<" "<<b<<endl;
    }
    
    
    return 0;
}
