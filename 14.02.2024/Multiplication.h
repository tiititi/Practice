#ifndef INC_14_02_2024_MULTIPLICATION_H
#define INC_14_02_2024_MULTIPLICATION_H

#include "Operator.h"

class Multiplication : public Operator
{
public:
    using Operator::Operator;

    [[nodiscard]] double calculate(double left, double right) const override;

    void printOperator() const override;

    ~Multiplication() override = default;
};

#endif //INC_14_02_2024_MULTIPLICATION_H