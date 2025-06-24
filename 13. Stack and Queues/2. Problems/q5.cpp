#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    int leftMax(vector<int> &height, int index)
    {
        vector<int> prefixMax;
        prefixMax.push_back(height[0]);
        for (int i = 1; i < index; i++)
        {
            int temp = max(height[i], prefixMax[i - 1]);
            prefixMax.push_back(temp);
        }
        return prefixMax[index - 1];
    }

    int rightMax(vector<int> &height, int index)
    {
        int n = height.size();
        vector<int> suffixMax(n);
        suffixMax[n - 1] = height[n - 1];
        for (int i = n - 2; i > index; i--)
        {
            suffixMax[i] = max(height[i], suffixMax[i + 1]);
        }
        return suffixMax[index + 1];
    }
    int trap(vector<int> &height)
    {
        int n = height.size();
        int total = 0;
        for (int i = 1; i <= n - 2; i++)
        {
            int left = leftMax(height, i);
            int right = rightMax(height, i);
            int sum = min(left, right) - height[i];
            if (sum > 0)
            {
                total += sum;
            }
        }
        return total;
    }
};

// TC here is O(n2) but it can be instead done in O(n) too.. just precompute the values and use at once later...
// This solution exceeds TLE (brute force)