#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int findMin(vector<int> &nums)
{
    int low = 0;
    int high = nums.size() - 1;
    int ans = INT_MAX;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        // left sorted
        if (nums[low] <= nums[mid])
        {
            ans = min(ans, nums[low]);
            low = mid + 1;
        }
        else
        {
            ans = min(ans, nums[mid]);
            high = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {3, 4, 5, 1, 2};
    cout << "ans is " << findMin(nums);
}