#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int searchInsert(vector<int> &nums, int target)
{
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] >= target)
        {
            return i;
        }
    }
    return nums.size();
}

int main()
{
    vector<int> nums = {1, 3, 5, 6};
    int target = 2;
    cout << "ans is " << searchInsert(nums, target);
}