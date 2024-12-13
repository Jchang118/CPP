#include <iostream>
#include "fib.hpp"
using namespace std;

int main()
{
    int n;
    while (true){
        cout << "Please input a positive integer:";
        cin >> n;
        if (n <= 0) continue;
        for (int i = 1; i <= n; i++){
            cout << fib(i) << "\t";
            if (i % 10 == 0)
                cout << endl;
        }
        if (n % 10 != 0)
            cout << endl;
        break;
    }
    
    return 0;
}