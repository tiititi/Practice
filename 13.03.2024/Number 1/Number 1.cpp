#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr)
{
    for (int i = 0; i < (int) arr.size(); ++i)
    {
        if(arr[i] < arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}


void sortingRatings(vector<int> array)
{
    vector<int> uniqueArray;
    vector<int> duplicateArray;

    for(int i = 0; i < (int) array.size(); ++i)
    {
        bool isDuplicate = false;
        for(int j = 0; j < (int) array.size(); ++j)
        {
            if(i != j && array[i] == array[j])
            {
                isDuplicate = true;
                break;
            }
        }

        if(isDuplicate)
        {
            duplicateArray.push_back(array[i]);
        }
        else
        {
            uniqueArray.push_back(array[i]);
        }
    }

    for(int i = 0; i < (int) duplicateArray.size(); ++i)
    {
        bubbleSort(duplicateArray);
    }

    for(int i = 0; i < (int) uniqueArray.size(); ++i)
    {
        bubbleSort(uniqueArray);
    }

    for(int i : uniqueArray)
    {
        cout << i << " ";
    }

    for(int i : duplicateArray)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> array = {7, 2, 5, 7, 8, 2, 3};
    sortingRatings(array);
    return 0;
}