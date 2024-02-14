#ifndef INC_14_02_2024_OPERATOR_H
#define INC_14_02_2024_OPERATOR_H

#include "Expression.h"

class Operator : public Expression
{
protected:
    const Expression& leftOperand;
    const Expression& rightOperand;

public:
    Operator(const Expression& leftOperand, const Expression& rightOperand)
            : leftOperand(leftOperand), rightOperand(rightOperand) {}

    [[nodiscard]] virtual double calculate(double left, double right) const = 0;

    [[nodiscard]] double eval() const override;

    void print() const override;

    virtual void printOperator() const = 0;

    ~Operator() override = default;
};

#endif //INC_14_02_2024_OPERATOR_H