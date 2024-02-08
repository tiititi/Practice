#include <iostream>
using namespace std;
typedef unsigned long int ULI;

class number1
{
    private:
        ULI number_1;
        ULI number_2; 
    public:
        number1(ULI Nuuumber_1, ULI nuuumber_2)
        {
            number_1 = Nuuumber_1;
            number_2 = nuuumber_2;
        }
        ~number1()
        {
            cout << "the object has been deleted" << endl;
        }
};

int main()
{
    number1 unknown(0, 0);

    return 0;
}
