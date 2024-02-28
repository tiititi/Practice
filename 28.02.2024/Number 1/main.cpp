#include <iostream>
#include "class Matrix2x2.h"

int main()
{
    Matrix A, B, C;
    cout << "Enter elements of matrix A (2x2):" << endl;
    cin >> A;
    cout << "Enter elements of matrix B (2x2):" << endl;
    cin >> B;

    C = A + B;
    cout << "A + B:" << endl;
    cout << C << endl;

    C = A * B;
    cout << "A * B:" << endl;
    cout << C << endl;

    double scalar;
    cout << "Enter a scalar value:" << endl;
    cin >> scalar;

    C = A * scalar;
    cout << "A * scalar:" << endl;
    cout << C << endl;

    return 0;
}