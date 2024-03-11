#include <iostream>
#include "Complex_Number.h"

int main()
{
    Complex c1(3.0, 2.0);
    Complex c2(1.0, 4.0);

    cout << "c1: " << c1 << endl;
    cout << "c2: " << c2 << endl;

    Complex sum = c1 + c2;
    cout << "sum: " << sum << endl;

    Complex product = c1 * c2;
    cout << "mult: " << product << endl;

    Complex scaled = 2.5 * c1;
    cout << "another mult: " << scaled << endl;

    return 0;
}