#include <iostream>
using namespace std;
typedef unsigned long int ULI;

class number2 {
private:
    int value1;
    int value2;

public:
    number2() 
    {
        value1 = 0;
        value2 = 0;
    }

    number2(int val1, int val2) 
    {
        value1 = val1;
        value2 = val2;
    }

    ~number2() 
    {
        cout << "Object deleted" << endl;
    }

    void increase_by_one() 
    {
        value1++;
        value2++;
    }

    void decrease_by_one() 
    {
        value1--;
        value2--;
    }

    int number_output() 
    {
        return value1;
    }

    int number2_output() 
    {
        return value2;
    }
};

int main() 
{
    number2 counter;                     
    counter.increase_by_one();            
    counter.increase_by_one();            
    counter.decrease_by_one();            
    int currentValue = counter.number_output(); 
    int currentValue2 = counter.number2_output();

    cout << "Current value1: " << currentValue << endl;
    cout << "Current value2: " << currentValue2 << endl;

    number2 counter2(10, 20);

    cout << "Counter2 value1: " << counter2.number_output() << endl;
    cout << "Counter2 value2: " << counter2.number2_output() << endl;

    return 0;
}

