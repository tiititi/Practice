#ifndef INC_14_02_2024_EXPRESSION_H
#define INC_14_02_2024_EXPRESSION_H

#include <iostream>
using namespace std;

class Expression
{
public:
    [[nodiscard]] virtual double eval() const = 0;
    virtual void print() const = 0;
    virtual ~Expression() = default;
};

#endif //INC_14_02_2024_EXPRESSION_H