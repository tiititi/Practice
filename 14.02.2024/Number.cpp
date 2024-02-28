#include "Number.h"
#include "Expression.h"
[[nodiscard]] double Number::eval() const
    {
        return value;
    }
void Number::print() const
{
    cout << value;
}