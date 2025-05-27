#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int maxProduct(vector<int> &nums)
{

    int max_prod = nums[0];

    for (int i = 0; i < nums.size(); i++)
    {
        int prod = nums[i];
        max_prod = max(prod, max_prod); // single element
        for (int j = i + 1; j < nums.size(); j++)
        {
            prod = prod * nums[j];
            max_prod = max(prod, max_prod);
        }
    }
    return max_prod;
}

int main()
{
    vector<int> nums = {2, 3, -2, 4};
    cout << "ans is " << maxProduct(nums);
}