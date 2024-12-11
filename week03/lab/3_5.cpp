#include <iostream>
using namespace std;

int main()
{
    int n, fa;
    cout << n << " " << fa << endl;
    do {
        fa *= n;
        n++;
    } while (n <= 10);

    cout << "fa = " << fa << endl;

    return 0;
}