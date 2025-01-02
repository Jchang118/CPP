#include <iostream>
using namespace std;

class Demo
{
    public:
        // static int num;
        inline static int num = 0; // c++17 std
        void display()
        {
            cout << "The value of the static member variable num is: " << num << endl;
        }
};

// int Demo::num = 0;

int main()
{
    Demo obj;
    obj.display();
    return 0;
}