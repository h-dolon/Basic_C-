#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int i,j;
    for (i = 0,j=n-1; i < n,j>=0; i++,j--)
    {
        if(a[i]==a[j])
        {
            continue;
        }
        else
        {
            cout<<"NO";
            break;
        }
        
    }
    if(i>=n-1)
    {
        cout<<"YES";
    }
    
    
    return 0;
}