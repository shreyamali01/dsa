#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void merge(vector<int> &arr, int l, int mid, int r)
{
    int i = l;
    int j = mid + 1;
    vector<int> temp;
    while ((i <= mid) && (j <= r))
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else if (arr[j] <= arr[i])
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= r)
    {
        temp.push_back(arr[j]);
        j++;
    }
    for (int i = l; i <= r; i++)
    {
        arr[i] = temp[i - l];
    }
}

void mergeSort(vector<int> &arr, int l, int r)
{
    if (l >= r)
    {
        return;
    }
    int mid = (l + r) / 2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    merge(arr, l, mid, r);
}

int main()
{
    vector<int> arr = {4, 1, 3, 9, 7};
    int l = 0;
    int r = arr.size() - 1;
    mergeSort(arr, l, r);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}