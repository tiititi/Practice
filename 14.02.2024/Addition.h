#ifndef INC_14_02_2024_ADDITION_H
#define INC_14_02_2024_ADDITION_H
#include "Operator.h"

class Addition : public Operator
{
public:
    using Operator::Operator;

    [[nodiscard]] double calculate(double left, double right) const override;

    void printOperator() const override;

    ~Addition() override = default;
};
#endif //INC_14_02_2024_ADDITION_H