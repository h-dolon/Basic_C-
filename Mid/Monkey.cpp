#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c[10000];
    while (cin.getline(c,1000))
    {
        // char c[1000];
        // cin>>c;
        int n;
        n=strlen(c);
        sort(c,c+n);

        for(int i=0; i<n; i++){
            if(c[i] != ' ') {
                cout << c[i];
            }
        }
        // cout<<c;
        cout<<endl;



    }
    cout<<endl;
    
    return 0;
}