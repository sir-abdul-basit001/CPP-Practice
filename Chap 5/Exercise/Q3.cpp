#include <iostream>
using namespace std;

int main()
{
    // Multiplication of 2 matrices
    int  i, j, k;
    int A[3][2], B[2][3], C[3][3];
    cout << "Enter the value of Matrix A" << endl;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 2; j++)
            cin >> A[i][j];

    cout << "Enter the value of Matrix B" << endl;
    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
            cin >> B[i][j];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; i < 3; i++)
        {
            C[i][j];
            for (k = 0; k < 2; k++)
            {
                C[i][j] += A[i][j] * B[i][j];
            }
        }
    }

    cout << "Product of MAtrix is " << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}