#include <iostream>
#include <vector>
using namespace std;

int searchTarget(const vector<int>& nums, int target)
{
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        } else
        {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {1, 3, 5, 7, 9, 11, 13};
    int target = 7;

    int result = searchTarget(nums, target);

    if (result != -1)
    {
        cout << "Target = " << result << endl;
    }
    else
    {
        cout << "no target" << endl;
    }

    return 0;
}