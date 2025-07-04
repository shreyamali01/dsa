#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int findPeakElement(vector<int> &nums)
{
    int n = nums.size();
    if (n == 1)
    {
        return 0;
    }
    if (nums[0] > nums[1])
    {
        return 0;
    }
    else if (nums[n - 1] > nums[n - 2])
    {
        return n - 1;
    }
    else
    {
        int low = 1;
        int high = n - 2;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (nums[mid] > nums[mid + 1] && nums[mid] > nums[mid - 1])
            {
                return mid;
            }
            else if (nums[mid] > nums[mid + 1])
            {
                high = mid - 1;
            }
            else if (nums[mid] < nums[mid + 1])
            {
                low = mid + 1;
            }
            else
            {
                low = mid + 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {1, 2, 3, 1};
    cout << "ans is " << findPeakElement(nums);
}