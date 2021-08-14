// ******Copying Array Elements******

#include <iostream>
using namespace std;

int main()
{

    int l_arr;

    cout << "Please Enter the length of the array: " << endl;
    cin >> l_arr;

    // taking array
    int arr[l_arr] = {};

    // taking user input in array:
    cout << "Please Enter the numbers in array: " << endl;
    for (int i = 0; i < l_arr; i++)
    {
        cin >> arr[i];
    }

    // taking new empty arr of length of array
    int nw_arr[sizeof(arr) / 4] = {};

    // copying items of first array to new array
    for (int i = 0; i < sizeof(arr) / 4; i++)
    {
        int di;
        di = arr[i];
        nw_arr[i] = di;
    }

    // printing items of new array 
    cout << "The numbers in new array are: "<< endl;
    for (int i = 0; i < sizeof(nw_arr) / 4; i++)
    {
        cout << nw_arr[i] << endl;
    }

    return 0;
}