#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool search(vector<int> &nums, int target)
{
    bool ans = false;
    int low = 0;
    int high = nums.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            return true;
        }
        if (nums[low] == nums[mid] && nums[mid] == nums[high])
        {
            low = low + 1;
            high = high - 1;
            continue;
        }
        // left sorted
        else if (nums[low] <= nums[mid])
        {
            if (nums[low] <= target && target <= nums[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        // right sorted
        else
        {
            if (nums[mid] <= target && target <= nums[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {2, 5, 6, 0, 0, 1, 2};
    int target = 3;
    cout << "ans is " << search(nums, target);
}