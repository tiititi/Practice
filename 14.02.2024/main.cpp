#include "Addition.h"
#include "Division.h"
#include "Expression.h"
#include "Multiplication.h"
#include "Number.h"
#include "Operator.h"
#include "Subtraction.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    shared_ptr<Number> number1 = make_shared<Number>(5);
    shared_ptr<Number> number2 = make_shared<Number>(7);

    Addition addition(number1, number2);
    Subtraction subtraction(number1, number2);
    Multiplication multiplication(number1, number2);
    Division division(number1, number2);

    cout << "Сложение: ";
    addition.print();
    cout << endl;
    double result1 = addition.eval();
    cout << "Результат сложения: " << result1 << endl << endl;

    cout << "Вычитание: ";
    subtraction.print();
    cout << endl;
    double result2 = subtraction.eval();
    cout << "Результат вычитания: " << result2 << endl << endl;

    cout << "Умножение: ";
    multiplication.print();
    cout << endl;
    double result3 = multiplication.eval();
    cout << "Результат умножения: " << result3 << endl << endl;

    cout << "Деление: ";
    division.print();
    cout << endl;
    double result4 = division.eval();
    cout << "Результат деления: " << result4 << endl;

    return 0;
}