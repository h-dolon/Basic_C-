#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for ( int k = 0; k < t; k++)
    {
        int m;
        cin>>m;
        int sum;
        cin >>sum;
        int a[m];
        for (int i = 0; i < m; i++)
        {
            cin>>a[i];
        }
        bool found=false;   
        if(m<3)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            for (int i = 0; i < m-2; i++)
            {
                for (int j = i+1; j < m-1; j++)
                {
                    for (int p = j+1; p < m; p++)
                    {
                        if(sum==a[i]+a[j]+a[p])
                        {
                            found=true;
                            break;
                        }
                    }
     
                    if(found==true){
                        break;
                    }
                }
                if(found==true)
                {
                    break;
                }    
            }
            if(found==true)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }

        }
        
    }
    
    
    return 0;
}
