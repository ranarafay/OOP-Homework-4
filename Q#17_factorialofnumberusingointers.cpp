// ******Factorial of a Number******

#include <iostream>
using namespace std;

int main()
{

    int num, count;

    // taking input
    cout << "Enter the value to find factorial: " << endl;
    cin >> num;

    // initializing
    count = 1;

    // declaring pointers
    int *pnum, *pcount;

    // refrencing / giving addresses
    pnum = &num;
    pcount = &count;

    // iteration for finding factorial and derefrencing
    for (int i = 1; i <= *pnum; i++)
    {
        *pcount *= i;
    }

    // printing
    cout << "The factorial of " << num << " (" << pnum << ")" << " is " << *pcount << " (" << pcount << ")." << endl;

    return 0;
}