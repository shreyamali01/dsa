#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// 32, 18, 26, 30
int findKRotation(vector<int> &arr)
{
    int low = 0;
    int high = arr.size() - 1;
    int min_num = INT_MAX;
    int min_idx = INT_MAX;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        // left sorted
        if (arr[low] <= arr[mid])
        {
            if (arr[low] <= min_num)
            {
                min_num = arr[low];
                min_idx = low;
            }
            low = mid + 1;
        }
        // right sorted
        else
        {
            if (arr[low] <= min_num)
            {
                min_num = arr[low];
                min_idx = low;
            }
            high = mid - 1;
        }
    }
    return min_idx;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    cout << "ans is " << findKRotation(nums);
}