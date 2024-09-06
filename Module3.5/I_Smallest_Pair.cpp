#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cin>>m;
    for (int k = 0; k < m; k++)
    {
        int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int sum=0,min=INT_MAX;
    
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j< n; j++)
        {
           sum=a[j]+a[i]+j-i;
           if(sum<min)
           {
            min=sum;
           }
        
        }
        
    }
    cout<<min<<endl;
    }

    return 0;
}