#include <iostream>
#include <vector>
using namespace std;

void findUniqueElements(const vector<int>& nums)
{
    int xorResult = 0;

    for (int num : nums)
    {
        xorResult ^= num;
    }

    int mask = 1;
    while ((mask & xorResult) == 0)
    {
        mask = mask << 1;
    }

    int num1 = 0, num2 = 0;
    for (int num : nums)
    {
        if (num & mask)
        {
            num1 ^= num;
        }
        else
        {
            num2 ^= num;
        }
    }

    std::cout << "unique elements: " << num1 << " " << num2 << endl;
}

int main()
{
    vector<int> nums = {4, 6, 2, 4, 2, 99};

    findUniqueElements(nums);

    return 0;
}