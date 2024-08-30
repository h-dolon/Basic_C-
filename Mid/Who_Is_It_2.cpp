#include <bits/stdc++.h>

using namespace std;

int main() {
    int serial[3], marks[3], T;
    string name[3];
    char section[3];

    cin >> T;
    while (T--)
    {
        int i, highest=-1, student_index=0;

        for(i=0; i<3; i++){
            cin >> serial[i] >> name[i] >> section[i] >> marks[i];
            if(marks[i] == highest && serial[i] < serial[student_index]){
                student_index = i;
                continue;
            }

            if(marks[i] > highest){
                highest = marks[i];
                student_index = i;
            }

        }

        cout << serial[student_index] << " " << name[student_index]
        << " " << section[student_index] << " " << marks[student_index] << endl;
    }

    return 0;
}