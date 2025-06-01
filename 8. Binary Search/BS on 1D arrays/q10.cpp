#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool search(vector<int> &nums, int target)
{
    bool ans = false;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == target)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    vector<int> nums = {2, 5, 6, 0, 0, 1, 2};
    int target = 0;
    cout << "ans is " << search(nums, target);
}