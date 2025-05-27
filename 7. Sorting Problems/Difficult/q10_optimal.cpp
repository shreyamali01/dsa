#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int merge(vector<int> &nums, int l, int mid, int r)
{
    int i = l;
    int j = mid + 1;
    int cnt = 0;
    using ll = long long;
    vector<int> temp;

    int p = l;
    int q = mid + 1;
    while ((p <= mid) && (q <= r))
    {
        if (nums[p] > (ll)2 * nums[q])
        {
            cnt = cnt + (mid - p + 1);
            q++;
        }
        else
        {
            p++;
        }
    }

    while ((i <= mid) && (j <= r))
    {
        if (nums[i] > nums[j])
        {
            temp.push_back(nums[j]);
            j++;
        }
        else
        {
            temp.push_back(nums[i]);
            i++;
        }
    }
    while (i <= mid)
    {
        temp.push_back(nums[i]);
        i++;
    }
    while (j <= r)
    {
        temp.push_back(nums[j]);
        j++;
    }

    for (int i = l; i <= r; i++)
    {
        nums[i] = temp[i - l];
    }
    return cnt;
}

int mergeSort(vector<int> &nums, int l, int r)
{
    if (l >= r)
    {
        return 0;
    }
    int mid = (l + r) / 2;
    int left_cnt = mergeSort(nums, l, mid);
    int right_cnt = mergeSort(nums, mid + 1, r);
    int m_cnt = merge(nums, l, mid, r);
    return left_cnt + right_cnt + m_cnt;
}

int reversePairs(vector<int> &nums)
{
    int l = 0;
    int r = nums.size() - 1;
    int cnt = mergeSort(nums, l, r);
    return cnt;
}

int main()
{
    vector<int> arr = {1, 3, 2, 3, 1};
    cout << "the answer is " << reversePairs(arr);
}