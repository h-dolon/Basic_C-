#include <bits/stdc++.h>

using namespace std;

class Student{
    public:

    int serial;
    string name;
    char section;
    int marks;
    // Student(){

    // }

    // Student(int serial, string name, char section, int marks){
    //     this->serial = serial;
    //     this->name = name;
    //     this->section = section;
    //     this->marks = marks;
    // }
};

int main() {
    Student student[3];
    int T;
    cin >> T;
    while (T--)
    {
        for(int i=0; i<3; i++){
            cin >> student[i].serial >> student[i].name >> student[i].section >> student[i].marks;
        }

        int i, highest=-1, student_index=0;

        for(i=0; i<3; i++){
            if(student[i].marks == highest){
                if(student[i].serial < student[student_index].serial){
                    student_index = i;
                    continue;
                }
            }
            if(student[i].marks > highest){
                highest = student[i].marks;
                student_index = i;
            }
            
        }

        cout << student[student_index].serial << " " << student[student_index].name 
        << " " << student[student_index].section << " " << student[student_index].marks << endl;
    }

    return 0;
}