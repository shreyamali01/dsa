#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// User function template for C++

class Solution
{
public:
    // arr : given array
    // k : find kth smallest element and return using this function
    void heapify(vector<int> &arr, int n, int i)
    {
        int smallest = i;
        int leftIdx = 2 * i + 1;
        int rightIdx = 2 * i + 2;

        if (leftIdx < n && arr[smallest] > arr[leftIdx])
        {
            smallest = leftIdx;
        }
        if (rightIdx < n && arr[smallest] > arr[rightIdx])
        {
            smallest = rightIdx;
        }
        if (smallest != i)
        {
            swap(arr[smallest], arr[i]);
            heapify(arr, n, smallest);
        }
    }

    int kthSmallest(vector<int> &arr, int k)
    {

        // convert array to minHeap
        int n = arr.size();
        for (int i = n / 2 - 1; i >= 0; i--)
        {
            heapify(arr, n, i);
        }

        for (int i = 0; i < k - 1; i++)
        {
            arr[0] = arr[n - 1];
            n--;
            heapify(arr, n, 0);
        }

        // kth smallest element will be the root node now
        return arr[0];
    }
};