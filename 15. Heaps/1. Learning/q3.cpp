#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i)
{

    int largest = i;
    int leftIdx = 2 * i;
    int rightIdx = 2 * i + 1;

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

    return;
}

int main()
{
    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }

    cout << "printing new arr" << " ";
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
}