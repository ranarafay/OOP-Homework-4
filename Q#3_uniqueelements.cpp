// ******Unique Elements******

#include <iostream>
using namespace std;

int main()
{

    // taking array of random elements
    int arr[] = {1, 2, 3, 1, 2, 3, 1, 4, 2, 1, 2, 3, 1, 10, 11};

    // taking len of array
    int len;
    len = sizeof(arr) / 4;

    // loop for iterating elements of array
    for (int i = 0; i < len; i++)
    {
        // count for counting the occurence of an elemen in the array
        int count;
        count = 0;

        // loop for checking every element
        for (int j = 0; j < len; j++)
        {
            // condition of matching element
            if (arr[i] == arr[j])
            {
                // increasing count
                count++;
            }
        }

        // condition for unique (1 time occurence)
        if (count == 1)
        {
            cout << "The Unique element of array is " << arr[i] << endl;
        }
    }

    return 0;
}