#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    void nearlySorted(vector<int> &arr, int k)
    {
        priority_queue<int, vector<int>, greater<int>> minHeap;
        int index = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (minHeap.size() > k)
            {
                arr[index] = minHeap.top();
                index = index + 1;
                minHeap.pop();
            }
            minHeap.push(arr[i]);
        }

        while (!minHeap.empty())
        {
            arr[index] = minHeap.top();
            minHeap.pop();
            index = index + 1;
        }
    }
};