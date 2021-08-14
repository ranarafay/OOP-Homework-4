// ******Counting the number of Alphabets, Digits and Special Numbers in a String******

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    string str;

    // taking user input
    cout << "Enter the String: " << endl;
    cin >> str;

    // taking arrays of alphabets, digits and characters
    char alph[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char dig[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char spch[] = {';', ':', '?', '/', '>', '<', '=', '@', '#', '$', '%', '&', '*', '(', ')', '-'};

    // initializing count variables
    int a_cnt, d_cnt, sc_cnt;
    a_cnt = 0;
    d_cnt = 0;
    sc_cnt = 0;

    // iteration on string
    for (int i = 0; i < str.length(); i++)
    {
        // checking
        if (find(begin(alph), end(alph), str[i]) != end(alph))
        {
            a_cnt++;
        }

        else if (find(begin(dig), end(dig), str[i]) != end(dig))
        {
            d_cnt++;
        }

        else if (find(begin(spch), end(spch), str[i]) != end(spch))
        {
            sc_cnt++;
        }
    }

    // printing output
    cout << "Alphabets: " << a_cnt << endl
         << "Digits: " << d_cnt << endl
         << "Special Characters: " << sc_cnt << endl;

    return 0;
}