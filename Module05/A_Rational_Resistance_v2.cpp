#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b, count = 0;

    cin >> a >> b;

    while(true)
    {
        if(a == 1)
        {
            count = count + b;
            break;
        }
        
        if(b == 1)
        {
            count = count + a;
            break;
        }

        if(a == b)
        {
            count = count + 1;
            break;
        }

        if(a < b)
        {
            count += 1;
            b = b - a;
        } else 
        {
            long long int divResult = a / b;

            count = count + divResult;
            a = a - (divResult * b);
        }
    }

    cout << count << endl;

    return 0;
}