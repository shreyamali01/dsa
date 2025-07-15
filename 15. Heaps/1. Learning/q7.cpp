#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    long long sumBetweenTwoKth(long long A[], long long N, long long K1, long long K2)
    {
        priority_queue<int> maxHeap1;
        priority_queue<int> maxHeap2;

        for (int i = 0; i < N; i++)
        {
            maxHeap1.push(A[i]);
            maxHeap2.push(A[i]);
            if (maxHeap1.size() > K1)
            {
                maxHeap1.pop();
            }
            if (maxHeap2.size() > K2 - 1)
            {
                maxHeap2.pop();
            }
        }

        long long sum1 = 0;
        long long sum2 = 0;
        while (!maxHeap1.empty())
        {
            sum1 = sum1 + maxHeap1.top();
            maxHeap1.pop();
        }
        while (!maxHeap2.empty())
        {
            sum2 = sum2 + maxHeap2.top();
            maxHeap2.pop();
        }

        return sum2 - sum1;
    }
};