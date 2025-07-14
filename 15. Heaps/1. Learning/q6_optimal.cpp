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
        int largest = i;
        int leftIdx = 2 * i + 1;
        int rightIdx = 2 * i + 2;

        if (leftIdx < n && arr[largest] < arr[leftIdx])
        {
            largest = leftIdx;
        }
        if (rightIdx < n && arr[largest] < arr[rightIdx])
        {
            largest = rightIdx;
        }
        if (largest != i)
        {
            swap(arr[largest], arr[i]);
            heapify(arr, n, largest);
        }
    }

    int kthSmallest(vector<int> &arr, int k)
    {

        // create a heap of size k from array
        int n = arr.size();
        int size = k;
        for (int i = (size / 2) - 1; i >= 0; i--)
        {
            heapify(arr, size, i);
        }

        for (int i = k; i < n; i++)
        {
            if (arr[0] > arr[i])
            {
                arr[0] = arr[i];
                heapify(arr, size, 0);
            }
        }

        return arr[0];
    }
};