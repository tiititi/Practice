#ifndef INC_28_02_2024_CLASS_MATRIX2X2_H
#define INC_28_02_2024_CLASS_MATRIX2X2_H

#include <iostream>
using namespace std;

class Matrix
        {
private:
    double mat[2][2]
    {

    };

public:
    Matrix();
    Matrix(double a, double b, double c, double d);

    friend ostream& operator<<(ostream& os, const Matrix& matrix);
    friend istream& operator>>(istream& is, Matrix& matrix);

    Matrix operator+(const Matrix& other) const;
    Matrix operator*(const Matrix& other) const;
    Matrix operator*(double scalar) const;
};
#endif // INC_28_02_2024_CLASS_MATRIX2X2_H