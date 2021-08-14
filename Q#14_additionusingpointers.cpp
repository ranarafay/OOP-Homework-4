// ******Addition of 2 numbers using Pointers******

#include <iostream>
using namespace std;

int main()
{

    int x;
    int y;

    // taking user input
    cout << "Enter two numbers: " << endl;
    cin >> x;
    cin >> y;

    // pointer declaration
    int *p1, *p2;

    // refrencing pointers / giving adresses
    p1 = &x;
    p2 = &y;

    // derefrencing / getting data from adresses and doing addition
    int sum = *p1 + *p2;

    // printing sum
    cout << "The sum of " << x << " and " << y << " on adresses " << p1 << " and " << p2 << " respectively is " << sum << ".";

    return 0;
}