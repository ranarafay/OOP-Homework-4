// ******Lengthn of Interger******

#include<iostream>
using namespace std;

int main(){

    int num;
    cout << "Enter the number to check its length: " << endl;
    cin >> num;

    int cnt, count;
    int dev;
    count = 0;
    while (true)
    {
        
        dev = num / 10;
        num = dev;
        count ++;

        if (dev <= 0)
        {
            break;
        }
        
        
    }
    
    cout << count;

    return 0;
}