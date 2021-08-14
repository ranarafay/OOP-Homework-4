// ******Merging Arrays in Decending Order******

#include <iostream>
using namespace std;

int main()
{
    // Taking 2 arrays of same sizes
    int arr1[] = {1, 144, 3, 4};
    int arr2[] = {5, 6, 7, 8};

    // taking lengths of both arrays
    int len1 = sizeof(arr1) / 4;
    int len2 = sizeof(arr2) / 4;
    int t_len = len1 + len2;

    // taking a  new array to merge arr1 and arr2
    int new_arr[t_len] = {};

    // loop for iterating the elements of 1st array and adding those elements in newarray
    for (int i = 0; i < len1; i++)
    {
        new_arr[i] = arr1[i];
    }

    // loop for iterating the elements of 2nd array and merging them in newarray
    for (int j = len1; j < t_len; j++)
    {
        // we are taking j - 4 to making a variable intializing with zero, we will use thi to iterate over arr2
        int x = j - 4;

        new_arr[j] = arr2[x];
    }

    // Printing the output as all merged elements of new arr
    cout << "The elements of two same size arrays after merging are: " << endl;
    for (int i = 0; i < t_len; i++)
    {
        cout << new_arr[i] << endl;
    }

    // for decending order

    int temp;

    // taking a loop for iterating the items step by step of new_arr
    for (int i = 0; i < t_len; i++)
    {
        // loop for checking the element with all elements of new_arr
        for (int j = 0; j < t_len; j++)
        {
            // condition for checking 
            if (new_arr[i] > new_arr[j])
            {
                // swapping the elements with each other
                temp = new_arr[i];
                new_arr[i] = new_arr[j];
                new_arr[j] = temp;
            }
        }
    }

    // printing array
    cout << "The Elements in Decending order are: " << endl;
    for (int i = 0; i < t_len; i++)
    {
        cout << new_arr[i] << endl;
    }

    return 0;
}