#include "Complex_Number.h"

Complex::Complex(double real, double imag) : real(real), imag(imag)
{

}

ostream& operator<<(ostream& os, const Complex& complex)
{
    os << complex.real << " + " << complex.imag << "i";
    return os;
}

istream& operator>>(istream& is, Complex& complex)
{
    is >> complex.real >> complex.imag;
    return is;
}

Complex Complex::operator+(const Complex& other) const
{
    return Complex(real + other.real, imag + other.imag);
}

Complex Complex::operator*(const Complex& other) const
{
    return Complex(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
}

Complex Complex::operator*(double scalar) const
{
    return Complex(real * scalar, imag * scalar);
}

Complex operator*(double scalar, const Complex& complex)
{
    return complex * scalar;
}