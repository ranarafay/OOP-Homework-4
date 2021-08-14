// ******Addition using Call by Reference******

#include <iostream>
using namespace std;

// declaring a function to add two numbers
void sum(int a)
{
    a = a + 5;
}

// using call by reference method to sum
void sumref(int *a)
{   
    // adding value on the address located in system's memory 
    *a = *a + 5;
}

int main()
{   
    int x;
    x = 5;

    cout << "The value of x is " << x << endl;

    // giving int value x as parameter
    sum (x);
    cout << "The value of x (after passing by sum function) is " << x << endl;
    
    // giving address of x as parameter 
    sumref(&x);
    cout << "The value of x (after using call by reference method) is " << x << endl;

    return 0;
}