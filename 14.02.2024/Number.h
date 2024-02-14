#ifndef INC_14_02_2024_NUMBER_H
#define INC_14_02_2024_NUMBER_H

#include "Expression.h"

class Number : public Expression
{
private:
    double value;

public:
    explicit Number(double value) : value(value) {}

    [[nodiscard]] double eval() const override;

    void print() const override;

    ~Number() override = default;
};

#endif //INC_14_02_2024_NUMBER_H