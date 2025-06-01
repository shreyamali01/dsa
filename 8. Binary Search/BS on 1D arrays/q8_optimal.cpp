#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int firstOccurence(vector<int> &arr, int target)
{
    int low = 0;
    int high = arr.size() - 1;
    int first = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            first = mid;
            high = mid - 1;
        }
        else if (arr[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return first;
}

int lastOccurence(vector<int> &arr, int target)
{
    int low = 0;
    int high = arr.size() - 1;
    int last = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            last = mid;
            low = mid + 1;
        }
        else if (arr[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return last;
}

int countFreq(vector<int> &arr, int target)
{
    int first = firstOccurence(arr, target);
    int last = lastOccurence(arr, target);
    if (first == -1 || last == -1)
    {
        return 0;
    }
    return (last - first + 1);
}

int main()
{
    vector<int> nums = {1, 1, 2, 2, 2, 2, 3};
    int target = 4;
    cout << "ans is " << countFreq(nums, target);
}