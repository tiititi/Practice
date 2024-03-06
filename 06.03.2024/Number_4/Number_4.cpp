#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int closestSumToTarget(const vector<int>& nums, int target)
{
    int closestSum = -1;
    int closestDiff = INT_MAX;

    for (size_t i = 0; i < nums.size(); ++i)
    {
        for (size_t j = i + 1; j < nums.size(); ++j)
        {
            int sum = nums[i] + nums[j];
            if (sum < target && target - sum < closestDiff)
            {
                closestDiff = target - sum;
                closestSum = sum;
            }
        }
    }

    return closestSum;
}

int main()
{
    vector<int> nums = {2, 5, 8, 10, 3};
    int target = 15;

    int closest = closestSumToTarget(nums, target);

    if (closest != -1)
    {
        cout << "amount less than target: " << closest << endl;
    }
    else
    {
        cout << "no amount available" << endl;
    }

    return 0;
}