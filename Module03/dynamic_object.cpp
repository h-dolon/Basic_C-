#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int id;
    int level;
    double cgpa;
    Student(int id,int level,double cgpa)
        {
            this->id=id;
            this->level=level;
            this->cgpa= cgpa;
        }

};
int fun()
{

}
int main()
{
    // Student dolon(1802075,04,4.00);
    Student *dolon= new Student(1802075,04,4.00);
    cout<<dolon->id<<" "<<dolon->level;

}