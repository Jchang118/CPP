#include <iostream>
#include "static_variable.h"
using namespace std;

int main()
{
    StaticTest t;

    cout << "Invoke static member function by object:\n";

    cout << "The value of the static member variable is:" << t.getValue() << endl;

    cout << "Invoke static member function by class:\n";
    cout << "The value of the static member variable is:" << StaticTest::getValue() << endl;

    return 0;
}