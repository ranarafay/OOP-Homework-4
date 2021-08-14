// ******Reverse String using Pointers******

#include <iostream>
using namespace std;

int main()
{

    string str, str_n, str_ref;

    // taking input from user
    cout << "Enter the String: " << endl;
    cin >> str;

    // initializing the pointer
    string *pstr;

    // refrencing / giving data
    pstr = &str;

    // derefrencing
    str_ref = *pstr;

    // iterating for reversing
    for (int i = str_ref.length() - 1; i >= 0; i--)
    {
        str_n += str_ref[i];
    }

    // printing output
    cout << "The string after reversing is: " << str_n;

    return 0;
}