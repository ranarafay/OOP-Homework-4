// ******Multiplication Of Matrices******

#include <iostream>
using namespace std;

int main()
{
    // initializing
    int rows1, columns1, rows2, columns2;

    // input for number of rows and columns
    // 1st matrix
    cout << "For 1st Matrix: " << endl;
    cout << "Enter the number of Rows for 1st matrix: " << endl;
    cin >> rows1;
    cout << "Enter the number of Columns for 1st matrix: " << endl;
    cin >> columns1;

    // 2nd matrix
    cout << "\nFor 2nd Matrix: " << endl;
    cout << "Enter the number of Rows for 2nd matrix: " << endl;
    cin >> rows2;
    cout << "Enter the number of Columns for 2nd matrix: " << endl;
    cin >> columns2;

    // Declaring matrices of input sizes
    int A[rows1][columns1];
    int B[rows2][columns2];

    // size of product matrix will be: a b * c d = a * d
    int mul[rows1][columns2] = {0};

    // condition for multiplication of matrices of different sizes
    if (columns1 == rows2)
    {
        cout << "\nThe multiplication of " << rows1 << " x " << columns1 << " and " << rows2 << " x " << columns2 << " is be possible" << endl;
        // For matrix A
        cout << "\nEnter values for matrix A: " << endl;
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < columns1; j++)
            {
                cout << "[" << i << "]"
                     << "[" << j << "]: ";
                cin >> A[i][j];
            }
        }

        // For matrix B
        cout << "\nEnter values for matrix B: " << endl;
        for (int i = 0; i < rows2; i++)
        {
            for (int j = 0; j < columns2; j++)
            {
                cout << "[" << i << "]"
                     << "[" << j << "]: ";
                cin >> B[i][j];
            }
        }

        // multiplication of matrices

        /*  
        2D Matrix Multiplication:

        00*00 + 01*10    00*01 + 01*11
        10*00 + 11*10    10*01 + 11*11


        Dry Run with respect to index:

        1 >> 000: 00 = A 00 * B 00
        2 >> 001: 00 = A 01 * B 10

        3 >> 010: 01 = A 00 * B 01
        4 >> 011: 01 = A 01 * B 11

        5 >> 100: 10 = A 10 * B 00
        6 >> 101: 10 = A 11 * B 10

        7 >> 110: 11 = A 10 * B 01
        8 >> 111: 11 = A 11 * B 11

    */
        // logic: (defined above)
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < columns2; j++)
            {
                for (int k = 0; k < rows2; k++)
                {
                    mul[i][j] = mul[i][j] + (A[i][k] * B[k][j]);
                }
            }
        }

        // printing matrix A
        cout << "\nMatrix A: " << endl;
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < columns1; j++)
            {
                cout << A[i][j] << " ";
            }
            cout << "\n";
        }

        // printing matrix B
        cout << "\nMatrix B: " << endl;
        for (int i = 0; i < rows2; i++)
        {
            for (int j = 0; j < columns2; j++)
            {
                cout << B[i][j] << " ";
            }
            cout << "\n";
        }

        // printing mul
        cout << "\nMultiplication of Matrix A and Matrix B:\n " << endl;
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < columns2; j++)
            {
                cout << mul[i][j] << " ";
            }
            cout << "\n";
        }

    } // end of if condition

    else if (columns1 != rows2)
    {
        cout << "\nThe multiplication of " << rows1 << " x " << columns1 << " and " << rows2 << " x " << columns2 << " can not be possible" << endl;
    }

    return 0;
}