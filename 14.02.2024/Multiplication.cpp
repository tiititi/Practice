#include "Multiplication.h"
[[nodiscard]] double Multiplication::calculate(double left, double right) const
    {
        return left * right;
    }
void Multiplication::printOperator() const
{
    cout << "*";
}