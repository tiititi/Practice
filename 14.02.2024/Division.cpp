#include "Division.h"
[[nodiscard]] double Division::calculate(double left, double right) const
    {
        return left / right;
    }
void Division::printOperator() const
{
    cout << "/";
}