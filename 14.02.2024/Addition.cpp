#include "Addition.h"
[[nodiscard]] double Addition::calculate(double left, double right) const
    {
        return left + right;
    }
void Addition::printOperator() const
{
    cout << "+";
}