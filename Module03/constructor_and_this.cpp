#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int id;
    int level;
    double cgpa;
    Student(int id,int level, double cgpa)
    {
        this->id=id;
        this->level=level;
        this->cgpa=cgpa;

    }
};
int main()
{
    Student dolon(1802075,4,3.04);
    // dolon.id=1802075;
    // dolon.level=4;
    // dolon.cgpa=3.04;

    cout<<dolon.id<<" "<<dolon.level<<" "<<dolon.cgpa<<endl;

    return 0;
}