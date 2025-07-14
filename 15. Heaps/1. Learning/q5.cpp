#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i)
{

    int smallest = i;
    int leftIdx = 2 * i;
    int rightIdx = 2 * i + 1;

    if (leftIdx <= n && arr[smallest] > arr[leftIdx])
    {
        smallest = leftIdx;
    }

    if (rightIdx <= n && arr[smallest] > arr[rightIdx])
    {
        smallest = rightIdx;
    }

    if (smallest != i)
    {
        swap(arr[i], arr[smallest]);
        heapify(arr, n, smallest);
    }
}

void heapSort(int arr[], int n)
{
    int t = n;

    while (t > 1)
    {
        swap(arr[1], arr[t]);
        t--;

        heapify(arr, t, 1);
    }
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
    cout << endl;

    // heap sort
    heapSort(arr, n);
    cout << "sorted heap ";
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
}