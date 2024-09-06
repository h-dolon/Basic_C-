#include<bits/stdc++.h>
using namespace std;
class Cricketer
{
    public:
    int jursey_no;
    string country_name;

};
int main()
{
    Cricketer *dhoni= new Cricketer;
    Cricketer *kholi= new Cricketer;
    kholi=dhoni;
    dhoni->jursey_no=03;
    dhoni->country_name="India";

    cout<<dhoni->jursey_no<<" "<<dhoni->country_name;
    cout<<kholi->jursey_no<<" "<<kholi->country_name;

    return 0;
}