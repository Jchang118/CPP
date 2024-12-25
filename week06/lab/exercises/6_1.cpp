#include <iostream>
using namespace std;

void input_array(int *arr, int size)
{
    for(int i =0; i < size; i++)
        arr[i] = i * 10;
    return;
}

int main()
{
    int len = 16;
    int arr[len];
    input_array(arr, len);
    for(int i = 0; i < len; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}