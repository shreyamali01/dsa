#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    int maxScore(vector<int> &cardPoints, int k)
    {
        int left = k - 1;
        int n = cardPoints.size();
        int right = n - 1;
        int maxSum = 0;
        int leftSum = 0;
        int rightSum = 0;
        for (int i = 0; i < k; i++)
        {
            leftSum = leftSum + cardPoints[i];
        }
        maxSum = leftSum;
        while (k > 0)
        {
            leftSum = leftSum - cardPoints[left];
            left--;
            rightSum = rightSum + cardPoints[right];
            right--;
            k--;
            maxSum = max(maxSum, leftSum + rightSum);
        }
        return maxSum;
    }
};