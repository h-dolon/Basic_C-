#include<bits/stdc++.h>
using namespace std;

class Number{
    public:
    long long int a;
    long long int b;
};

Number doWhenLobIsSmaller(Number n)
{
    n.b = n.b - n.a;
    return n;
}

Number doWhenHorIsSmaller(Number n, long long int divResult)
{
    n.a = n.a - (divResult * n.b);
    return n;
}

int main()
{
    long long int asol_a, asol_b, count = 0;

    cin >> asol_a >> asol_b;

    Number number;
    number.a = asol_a;
    number.b = asol_b;

    while(true)
    {
        if(number.a == 1)
        {
            count = count + number.b;
            break;
        }
        if(number.b == 1)
        {
            count = count + number.a;
            break;
        }

        if(number.a == number.b)
        {
            count = count + 1;
            break;
        }

        if(number.a < number.b)
        {
            count += 1;
            number = doWhenLobIsSmaller(number);
        } else 
        {
            long long int divResult = number.a / number.b;
            count = count + divResult;
            number = doWhenHorIsSmaller(number, divResult);
        }
    }

    cout << count << endl;

    return 0;
}