// ******Seperate Odd and Even in seperate Arrays******

#include<iostream>
using namespace std;

int main(){

    int arr [10] = {12,3,4,5,1,2,3,4,5,9};

    int arr_e[5] = {};
    int arr_o[5] = {};

    // loop for iterating elements of array
    int cnt_e,cnt_o;
    cnt_e = 0;
    cnt_o = 0;
    for (int i = 0; i < 10; i++)
    {   
        // for even
        if (arr[i] % 2 == 0)
        {
            arr_e[cnt_e] = arr[i];
            cnt_e ++;
        }
        
        // for off
        else if (arr [i] % 2 != 0)
        {
            arr_o[cnt_o] = arr[i];
            cnt_o ++;
        }
        
    }
    // printing array
    cout << "The elements of Array are: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }
    
    // printing even array
    cout << "The elements of Even Array are: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr_e[i] << endl;
    }

    // printing odd array
    cout << "The elements of Odd Array are: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr_o[i] << endl;
    }
    
    
    return 0;

}