#include <iostream>
#include "stuinfo.hpp"
using namespace std;

void inputstu(stuinfo stu[], int n)
{
    for(int i = 0; i < n; i++){
        cout << "Please enter the name of student: ";
        cin.get(stu[i].name, 20);
        cin.get();
        cout << "Please enter 3 scores: ";
        cin >> stu[i].score[0] >> stu[i].score[1] >> stu[i].score[2]; 
        cin.get();
        stu[i].ave = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3.0;
    }
}

void showstu(stuinfo stu[], int n)
{
    cout << "Student(s) score data is displayed below:" << endl;
    for(int i = 0; i < n; i++){
        cout << "Name: " << stu[i].name << ", Scores: " << stu[i].score[0] << " " <<stu[i].score[1] << " " << stu[i].score[2] << ", Average: " << stu[i].ave << endl;
    }
}