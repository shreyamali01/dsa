#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int maxi = INT32_MIN;
    int sum = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        sum = sum + nums[i];
        if (sum < 0)
        {
            sum = 0;
        }
        maxi = max(sum, maxi);
    }
    return maxi;
}

int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "ans is " << maxSubArray(nums);
}