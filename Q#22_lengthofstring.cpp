// ******Length of String******

#include <iostream>
using namespace std;

int main()
{

    string str;
    // taking input from the user
    cout << "Enter the string to check length: " << endl;
    cin >> str;

    int count, cnt;

    // cnt for iterating
    cnt = 1;

    // count for counting number of elements
    count = 0;
    while (true)
    {

        char ch;
        ch = str[cnt];
        count++;
        cnt++;

        // when the string will end the iterator will go to the blank "\0" null or zero
        if (ch == 0)
        {
            break;
        }
    }

    cout << "The length of the string is: " << count;
    return 0;
}