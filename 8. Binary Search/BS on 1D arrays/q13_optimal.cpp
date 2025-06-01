#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int singleNonDuplicate(vector<int> &nums)
{
    int n = nums.size();
    if (nums[0] != nums[1])
    {
        return nums[0];
    }
    else if (nums[n - 2] != nums[n - 1])
    {
        return nums[n - 1];
    }
    else
    {
        int low = 1;
        int high = n - 2;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (nums[mid - 1] != nums[mid] && nums[mid] != nums[mid + 1])
            {
                return nums[mid];
            }
            else if (nums[mid - 1] == nums[mid])
            {
                // even
                if (((mid - 1) % 2) == 0)
                {
                    low = mid + 1;
                }
                // odd
                else
                {
                    high = mid - 1;
                }
            }
            else
            {
                if (mid % 2 == 0)
                {
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
        }
    }
    return 0;
}

int main()
{
    vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    cout << "ans is " << singleNonDuplicate(nums);
}