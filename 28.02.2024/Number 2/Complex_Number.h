#ifndef NUMBER_2_COMPLEX_NUMBER_H
#define NUMBER_2_COMPLEX_NUMBER_H

#include <iostream>
using namespace std;

class Complex
{
private:
    double real;
    double imag;

public:
    explicit Complex(double real = 0.0, double imag = 0.0);

    friend std::ostream& operator<<(ostream& os, const Complex& complex);
    friend std::istream& operator>>(istream& is, Complex& complex);

    Complex operator+(const Complex& other) const;
    Complex operator*(const Complex& other) const;
    Complex operator*(double scalar) const;
    friend Complex operator*(double scalar, const Complex& complex);
};
#endif //NUMBER_2_COMPLEX_NUMBER_H