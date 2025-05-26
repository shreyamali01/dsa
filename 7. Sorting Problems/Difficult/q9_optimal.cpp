#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int merge(vector<int> &arr, int l, int mid, int r)
{
    int i = l;
    int j = mid + 1;
    int cnt = 0;
    vector<int> temp;
    while (i <= mid && j <= r)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            cnt = cnt + (mid - i + 1);
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

    return cnt;
}

int mergeSort(vector<int> &arr, int l, int r)
{
    if (l >= r)
    {
        return 0;
    }
    int mid = (l + r) / 2;
    int left_cnt = mergeSort(arr, l, mid);
    int right_cnt = mergeSort(arr, mid + 1, r);
    int cnt = merge(arr, l, mid, r);
    return left_cnt + right_cnt + cnt;
}

int inversionCount(vector<int> &arr)
{

    int l = 0;
    int r = arr.size() - 1;
    int res = mergeSort(arr, l, r);
    return res;
}

int main()
{
    vector<int> arr = {10, 10, 10};
    cout << "the answer is " << inversionCount(arr);
}