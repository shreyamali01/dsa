#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#include <bits/stdc++.h>

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
        swap(arr[i], arr[smallest]);
        heapify(arr, n, smallest);
    }
}

vector<int> buildMinHeap(vector<int> &arr)
{
    int n = arr.size();
    for (int i = (n / 2) - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
    return arr;
}
