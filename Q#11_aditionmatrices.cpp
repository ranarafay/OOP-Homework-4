// ******Addition of Matrices******

#include <iostream>
using namespace std;

int main()
{

    int rows, columns;

    cout << "Enter the number of Rows: " << endl;
    cin >> rows;
    cout << "Enter the number of Columns: " << endl;
    cin >> columns;

    int A[rows][columns];
    int B[rows][columns];

    int sum [rows][columns];

    // For matrix A
    cout << "Enter values for matrix A: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {   
            cout << i << " x " << j << ":" << endl;
            cin >> A[i][j];
        }
    }

    // For matrix B
    cout << "Enter values for matrix B: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << i << " x " << j << ":" << endl;
            cin >> B[i][j];
        }
    }

    // Addition of A and B
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            sum[i][j] = A[i][j] + B[i][j];
        }
        
    }
    

    // printing matrix A
    cout << "Matrix A: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }


    // printing matrix B
    cout << "Matrix B: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << "\n";
    }


    // printing sum
    cout << "Sum of Matrix A and Matrix B: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << sum[i][j] << " ";
        }
        cout << "\n";
    }


    return 0;
}