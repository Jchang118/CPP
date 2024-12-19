#include <iostream>
#include "stuinfo.hpp"
using namespace std;

int main()
{
    int n = 0;
    cout << "Please enter number of students: ";
    cin >> n;
    cin.get();
    stuinfo stu[n];

    inputstu(stu, n);
    showstu(stu, n);

    return 0; 
}