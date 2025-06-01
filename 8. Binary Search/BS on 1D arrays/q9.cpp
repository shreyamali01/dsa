#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int search(vector<int> &nums, int target)
{
    int n = nums.size();
    int idx = -1;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == target)
        {
            idx = i;
            return idx;
        }
    }
    return idx;
}

int main()
{
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    cout << "ans is " << search(nums, target);
}