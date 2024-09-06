#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    char section;
	int math_marks;
	int cls;
    Student(string name,int roll,char section,int math_marks,int cls)
    {
        this->name=name;
        this->roll=roll;
        this->section=section;
        this->math_marks=math_marks;
        this->cls=cls;
    }

};
int main()
{
    Student dolon("dolon",75,'A',50,8);
    Student rakib("rakib",53,'A',60,8);
    Student mim("mim",02,'A',80,8);

    if(dolon.math_marks>rakib.math_marks && dolon.math_marks>>mim.math_marks)
    {
        cout<<dolon.name<<" "<<dolon.roll<<" "<<dolon.section<<" "<<dolon.math_marks<<endl;
    }
    else if(rakib.math_marks>dolon.math_marks && rakib.math_marks>mim.math_marks)
    {
        cout<<rakib.name<<" "<<rakib.roll<<" "<<rakib.math_marks<<endl;
    }
    else
    {
        cout<<mim.name<<" "<<mim.math_marks<<endl;
    }
    // cout<<dolon.name<<" "<<dolon.roll<<" "<<dolon.section<<" "<<dolon.math_marks<<endl;    
    // dolon.cls=3;
    // dolon.roll=5;
    // dolon.math_marks=50;
    //cout<<dolon.cls;
    return 0;
}