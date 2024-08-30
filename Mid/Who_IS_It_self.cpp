#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int serial;
    string name;
    char section;
    int marks;
};

int main()
{
    // Student s1,s2,s3;
    int t;
    cin>>t;
    while (t--)
    {
        Student stu[3];
        for (int i = 0; i < 3; i++)
        {
            cin>>stu[i].serial>>stu[i].name>>stu[i].section>>stu[i].marks;
        }
        int i, index=0;
        for ( i = 1; i < 3; i++)
        {
            if(stu[i].marks>=stu[index].marks)
            {
                if(stu[index].marks==stu[i].marks && stu[i].serial<stu[index].serial)
                {
                    index=i;
                }
                else 
                {
                    stu[index].marks=stu[i].marks;
                    index=i;
                }
            }
        }
        cout<<stu[index].serial<<" "<<stu[index].name<<" "<<stu[index].section<<" "<<stu[index].marks<<endl;
     }
    
    


    return 0;
}