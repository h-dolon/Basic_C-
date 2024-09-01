#include<bits/stdc++.h>
using namespace std;
// int * funjj(int x)
// {
//     int ar[x];
//     int *p=&ar[0];
//     for (int i = 0; i < x; i++)
//     {
//         cin>>ar[i];
//     }
//     return &ar[0];   
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int *p=funjj(n);
//     // for (int i = 0; i < x; i++)
//     // {
//     //     cout<<ar[i]<<" ";
//     // }
//     return 0;
// }
int * fun(int x)
{
    int * ar= new int[x];
    for (int i = 0; i < x; i++)
    {
        cin>>ar[i];
    }
    
    return ar;
    
}
int main()
{
    int n;
    cin>>n;
    int * dolon = fun(n);
    for (int i = 0; i < n; i++)
    {
        cout<<dolon[i]<<" ";
    }
    
    

}