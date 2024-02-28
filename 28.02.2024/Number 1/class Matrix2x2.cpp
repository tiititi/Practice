#include "class Matrix2x2.h"

Matrix::Matrix()
{
    for (auto & i : mat)
    {
        for (double & j : i)
        {
            j = 0;
        }
    }
}

Matrix::Matrix(double a, double b, double c, double d)
{
    mat[0][0] = a;
    mat[0][1] = b;
    mat[1][0] = c;
    mat[1][1] = d;
}

ostream& operator<<(ostream& os, const Matrix& matrix)
{
    for (auto i : matrix.mat)
    {
        for (int j = 0; j < 2; ++j)
        {
            os << i[j] << " ";
        }
        os << endl;
    }
    return os;
}

istream& operator>>(istream& is, Matrix& matrix)
{
    for (auto & i : matrix.mat)
    {
        for (double & j : i)
        {
            is >> j;
        }
    }
    return is;
}

Matrix Matrix::operator+(const Matrix& other) const
{
    Matrix result;
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            result.mat[i][j] = mat[i][j] + other.mat[i][j];
        }
    }
    return result;
}

Matrix Matrix::operator*(const Matrix& other) const
{
    Matrix result;
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            for (int k = 0; k < 2; ++k)
            {
                result.mat[i][j] += mat[i][k] * other.mat[k][j];
            }
        }
    }
    return result;
}

Matrix Matrix::operator*(double scalar) const
{
    Matrix result;
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            result.mat[i][j] = mat[i][j] * scalar;
        }
    }
    return result;
}