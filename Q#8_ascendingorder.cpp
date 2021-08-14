// ******Sorting Elements in Ascending Order******

#include <iostream>
using namespace std;

int main()
{

    int arr[10] = {12, 3, 4, 5, 1, 2, 3, 4, 5, 9};

    int len;
    len = sizeof(arr) / 4;

    cout << "The Elements of array are: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }

    // for ascending order

    int temp;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {   
            // condition for ascending
            if (arr[i] < arr[j])
            {   
                // swapping the elements 
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "The Elements of array in Ascending order are: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}