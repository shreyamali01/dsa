#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int reversePairs(vector<int> &nums)
{
    int n = nums.size();
    int cnt = 0;
    using ll = long long;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] > (ll(2) * nums[j]))
            {
                cnt = cnt + 1;
            }
        }
    }
    return cnt;
}

int main()
{
    vector<int> nums = {1, 3, 2, 3, 1};
    cout << "ans is" << reversePairs(nums);
}