#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int findMin(vector<int> &nums)
{
    int min = INT_MAX;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] < min)
        {
            min = nums[i];
        }
    }
    return min;
}

int main()
{
    vector<int> nums = {2, 5, 6, 0, 0, 1, 2};
    int target = 3;
    cout << "ans is " << findMin(nums);
}