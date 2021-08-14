#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    char ch;

    // input from User
    cout << "Enter any letter: " << endl;
    cin >> ch;

    // array of alphabets (uppercase)
    char ch_arr[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    // conditions
    if (find(begin(ch_arr), end(ch_arr), ch) != end(ch_arr))
    {
        cout << "You entered an Upper Case letter!" << endl;
    }

    else
    {
        cout << "You entered a Lower Case letter!" << endl;
    }

    return 0;
}