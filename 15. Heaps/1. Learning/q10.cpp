#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    vector<int> arrayRankTransform(vector<int> &arr)
    {
        priority_queue<int, vector<int>, greater<int>> minHeap;
        // pushing all the elements in min heap
        for (int i = 0; i < arr.size(); i++)
        {
            minHeap.push(arr[i]);
        }

        int rank = 0;
        unordered_map<int, int> mpp;
        // getting ranks
        while (!minHeap.empty())
        {
            int ele = minHeap.top();
            // not in the map
            if (mpp.find(ele) == mpp.end())
            {
                rank = rank + 1;
                mpp[ele] = rank;
            }
            // in the map
            else
            {
                mpp[ele] = rank;
            }
            minHeap.pop();
        }

        // adding ranks now
        vector<int> ans;
        for (int i = 0; i < arr.size(); i++)
        {
            ans.push_back(mpp[arr[i]]);
        }

        return ans;
    }
};