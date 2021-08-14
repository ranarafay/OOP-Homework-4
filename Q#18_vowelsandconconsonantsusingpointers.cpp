// ******Count number of Vowels and Conconants using Pointers******

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    string str, str_new;

    cout << "Enter the sring to find the number of Vowels and Consonants: " << endl;
    cin >> str;

    // declaring pointer and refrencing to address of string
    string *pstr;
    pstr = &str;

    // declaring count variables and initializing
    int vow_cnt, cons_cnt;
    vow_cnt = 0;
    cons_cnt = 0;

    // taking an array of vowels for matching characters of string
    char vow[5] = {'a', 'e', 'i', 'o', 'u'};

    // derefrencing string and taking into another variable
    str_new = *pstr;
    for (int i = 0; i < str_new.length(); i++)
    {
        // matching string
        if (find(begin(vow), end(vow), (char)tolower(str_new[i])) != end(vow))
        {
            vow_cnt++;
        }

        else
        {
            cons_cnt++;
        }
    }

    // printing output
    cout << "Vowels: " << vow_cnt << endl
         << "Consonants: " << cons_cnt << endl;

    return 0;
}