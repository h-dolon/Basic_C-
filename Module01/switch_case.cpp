#include<iostream>
using namespace std;
int main()
{
    int x=3;
    switch (x)
    {
    case 1:
        printf("one");
        break;
    
    case 2:
        printf("Two");
        break;
    case 3:
        printf("three");
    case 4:
        printf("Four");
    default:
        cout<<"kichu mile nai";
    }
    
    return 0;
}