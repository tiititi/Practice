#include <iostream>
#include <vector>
using namespace std;

int maxSubArraySum(vector<int>& array)
{
    int maxSum = array[0];
    int currentSum = array[0];

    for (int i = 1; i < (int) array.size(); ++i)
    {
        currentSum = max(array[i], currentSum + array[i]);
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}

int main()
{
    vector<int> array = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int result = maxSubArraySum(array);
    cout << result << endl;

    return 0;
}