// ******Delete Element from desired Position******

#include <iostream>
using namespace std;

int main()
{

    int arr[6] = {0, 1, 2, 3, 4, 5};

    int len;
    len = sizeof(arr) / 4;
    int pos;

    // user input
    cout << "Enter the Positon/Index of element you want to delete: " << endl;
    cin >> pos;

    for (int i = pos; i < len; i++)
    {
        // moving the elements of array to left / iterating from postition /overwriting
        arr[i] = arr[i + 1];
    }

    // printing array after deleting
    cout << "Array after deleting element on index " << pos << " is: " << endl;
    for (int i = 0; i < len - 1; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}