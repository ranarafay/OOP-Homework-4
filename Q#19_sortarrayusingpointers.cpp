// ******Sort an Array using Pointers******

#include<iostream>
using namespace std;

int main(){

    int arr [5] = {2,5,4,1,3};
    int len;
    len = sizeof(arr)/4;

    // for sorting

    int temp;
    

    for (int i = 0; i < len; i++)
    {
        for (int j= 0; j < len; j++)
        {
            if (arr [i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
        
    }
    
    for (int i = 0; i < len; i++)
    {
        cout << arr [i] << endl;
    }
    
    return 0;
}