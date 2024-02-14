#ifndef INC_14_02_2024_DIVISION_H
#define INC_14_02_2024_DIVISION_H

#include "Operator.h"

class Division : public Operator
{
public:
    using Operator::Operator;

    [[nodiscard]] double calculate(double left, double right) const override;

    void printOperator() const override;

    ~Division() override = default;
};

#endif //INC_14_02_2024_DIVISION_H
