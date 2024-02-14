#include "Subtraction.h"
[[nodiscard]] double Subtraction::calculate(double left, double right) const
    {
        return left - right;
    }
void Subtraction::printOperator() const
{
    cout << "-";
}