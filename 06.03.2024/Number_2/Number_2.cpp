#include <iostream>
#include <vector>
using namespace std;

int findSingleElement(const vector<int>& nums)
{
    int result = 0;
    for (int num : nums)
    {
        result ^= num;
    }
    return result;
}

int main()
{
    vector<int> nums = {4, 6, 2, 6, 4, 8};

    int singleElement = findSingleElement(nums);

    cout << "Element without pair: " << singleElement << endl;

    return 0;
}