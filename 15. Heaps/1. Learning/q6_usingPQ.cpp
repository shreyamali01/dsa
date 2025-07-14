#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    int findKthLargest(vector<int> &nums, int k)
    {
        // minheap implementation
        priority_queue<int, vector<int>, greater<int>> minHeap;
        for (int i = 0; i < k; i++)
        {
            minHeap.push(nums[i]);
        }

        int n = nums.size();
        for (int i = k; i < n; i++)
        {
            if (minHeap.top() < nums[i])
            {
                minHeap.pop();
                minHeap.push(nums[i]);
            }
        }

        return minHeap.top();
    }
};