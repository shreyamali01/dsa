#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int findPeakElement(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < nums.size(); i++)
    {
        if (i == 0)
        {
            if (nums[i] > nums[i + 1])
            {
                return i;
            }
        }
        else if (i == n - 1)
        {
            if (nums[n - 1] > nums[n - 2])
            {
                return n - 1;
            }
        }
        else
        {
            if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1])
            {
                return i;
            }
        }
    }
    return 0;
}

int main()
{
    vector<int> nums = {1, 2, 3, 1};
    cout << "ans is " << findPeakElement(nums);
}