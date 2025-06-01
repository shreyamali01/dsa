#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int singleNonDuplicate(vector<int> &nums)
{
    int ans = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        ans = ans ^ nums[i];
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    cout << "ans is " << singleNonDuplicate(nums);
}