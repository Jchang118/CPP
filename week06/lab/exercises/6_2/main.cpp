#include <iostream>
#include "functions.h"
using namespace std;

int main()
{
    int a, b;
    cout << "Please enter integer a: ";
    cin >> a;
    cin.get();
    cout << "Please enter integer b: ";
    cin >> b;
    cin.get();
    swap(a, b);
    cout << "After swap, a = " << a << ", b = " << b << "." << endl;
    return 0;    
}