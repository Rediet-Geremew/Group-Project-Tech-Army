#include <iostream>
#include <string>
using namespace std;

const int NUM_DAYS = 7;
const int MAX_STUDENTS = 100;
int main(){
int numStudents;
cout<<"enter the number of students:";
cin>>numStudents;

string names[50];
int studyHours[numStudents][NUM_DAYS];

for (int i = 0; i < numStudents; i++) {
    cout << "Enter student name: ";
        cin >> names[i];

        for (int j = 0; j < NUM_DAYS; j++) {
            cout << "Enter study hours for day " << j + 1 << ": ";
            cin >> studyHours[i][j];
        }
    }
    int totalHours = 0;

    for (int i = 0; i < numStudents; i++) {
        for (int j = 0; j < NUM_DAYS; j++) {
            totalHours += studyHours[i][j];
        }
    }
     cout << "----------------------------------------------" << endl;
    cout << "Student\t\t";
    for (int i = 0; i < NUM_DAYS; i++) {
        cout << "Day " << i + 1 << "\t";
    }
    cout << endl;
    cout << "----------------------------------------------" << endl;

    for (int i = 0; i < numStudents; i++) {
        cout << names[i] << "\t\t";
        for (int j = 0; j < NUM_DAYS; j++) {
            cout << studyHours[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "----------------------------------------------" << endl;
    cout << "Total\t\t";
    for (int i = 0; i < NUM_DAYS; i++) {
        int totalDayHours = 0;
        for (int j = 0; j < numStudents; j++) {
            totalDayHours += studyHours[j][i];
        }
        cout << totalDayHours << "\t";
    }
    cout << endl;

    cout << "----------------------------------------------" << endl;
    cout << "Average\t\t";
    for (int i = 0; i < NUM_DAYS; i++) {
        int totalDayHours = 0;
        for (int j = 0; j < numStudents; j++) {
            totalDayHours += studyHours[j][i];
        }
        double averageDayHours = static_cast<double>(totalDayHours) / numStudents;
        cout << averageDayHours << "\t";
    }
    cout << endl;
    cout << "----------------------------------------------" << endl;
}
