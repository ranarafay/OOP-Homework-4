// ******Maximum and Minimum in an Array******

#include<iostream>
using namespace std;

int main(){

    int arr[10] = {3,4,5,6,1,2,0,12,3,4};

    int len;
    len = sizeof(arr)/4;

    // for maximum
    int max;
    max = arr[0];
    for (int i = 0; i < len; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        
    }
    
    // for  minimum
    int min;
    min = arr[0];
    for (int i = 0; i < len; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
        
    }
    
    cout << "The Maximum value in the array is: " << max << endl;
    cout << "The Minimum value in the array is: " << min << endl;

    return 0;
}