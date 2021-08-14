// ******Second Minimum Element******

#include <iostream>
using namespace std;

int main()
{

    int arr[10] = {4, 5, 3, 12, 54, 78, 5, 6, 3, 7};
    int len;
    len = sizeof(arr) / 4;

    // for minimum element
    int min;
    min = arr[0];
    for (int i = 0; i < len; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }

    // for second smallest
    int min2;
    min2 = arr[0];
    for (int i = 0; i < len; i++)
    {
        // condition for second smallest
        if (min2 > arr[i] && arr[i] != min)
        {
            min2 = arr[i];
        }
    }

    cout << "The second smallest element in array is: " << min2 << endl;

    return 0;
}