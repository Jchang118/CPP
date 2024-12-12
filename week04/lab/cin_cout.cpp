#include <iostream>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter a string:";
    cin >> str;
    cout << "You entered: " << str << endl;

    cout << "Enter another string:";
    // cin is to sue whitespaces -- spaces, tabs and newlines to separate a string
    cin >> str;
    cout << "You entered: " << str << endl;

    return 0;
}