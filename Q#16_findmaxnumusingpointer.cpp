// ******Find Maximum number using Pointer******

#include <iostream>
using namespace std;

int main()
{

    int x, y;

    // input from user
    cout << "Enter two values :" << endl;
    cin >> x;
    cin >> y;

    // declaring pointers
    int *p1, *p2;

    // refrencing / giving addresses
    p1 = &x;
    p2 = &y;

    // condition and defrencing
    if (*p1 > *p2)
    {
        cout << "The value of " << *p1 << " on address " << p1 << " is greater. " << endl;
    }

    else
    {
        cout << "The value of " << *p2 << " on address " << p2 << " is greater. " << endl;
    }

    return 0;
}