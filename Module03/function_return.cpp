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
Student * fun()
{
   // this is static object
//    Student dolon(1802075,4,4.00);
//this is dynamic object
    Student * dolon=new Student(18002075,3,4.00);
   //Student * p=&dolon;
   return dolon; 
}
int main()
{
    Student * ans=fun();
    cout<<(*ans).id<<" "<<(*ans).level<<" "<<(*ans).cgpa;
    delete ans;
    return 0;
}