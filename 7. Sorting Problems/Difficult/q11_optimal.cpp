#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int maxProduct(vector<int> &nums)
{
    int pre_prod = 1;
    int suf_prod = 1;
    int max_prod = INT_MIN;
    int n = nums.size();
    for (int i = 0; i < nums.size(); i++)
    {
        pre_prod = pre_prod * nums[i];
        suf_prod = suf_prod * nums[n - 1 - i];
        max_prod = max(max_prod, max(pre_prod, suf_prod));
        if (pre_prod == 0)
        {
            pre_prod = 1;
        }
        if (suf_prod == 0)
        {
            suf_prod = 1;
        }
    }
    return max_prod;
}

int main()
{
    vector<int> nums = {2, 3, -2, 4};
    cout << "ans is " << maxProduct(nums);
}