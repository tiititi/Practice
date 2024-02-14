#include "Addition.h"
#include "Operator.h"
[[nodiscard]] double Addition::calculate(double left, double right) const
    {
        return left + right;
    }
void Addition::printOperator() const
{
    cout << "+";
}