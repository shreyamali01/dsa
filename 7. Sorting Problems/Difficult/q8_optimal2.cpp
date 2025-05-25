#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    nums1.resize(m);
    nums2.resize(n);
    for (int i = 0; i < n; i++)
    {
        nums1.push_back(nums2[i]);
    }
    int len = nums1.size();

    int gap = (len / 2) + (len % 2);
    while (gap > 0)
    {
        int left = 0;
        int right = left + gap;
        while (right < len)
        {
            if (nums1[left] > nums1[right])
            {
                swap(nums1[left], nums1[right]);
            }
            right++;
            left++;
        }
        if (gap != 1)
        {
            gap = (gap / 2) + (gap % 2);
        }
        else
        {
            break;
        }
    }
}

int main()
{
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    int n = 3;
    int m = 3;
    merge(nums1, m, nums2, n);
    for (int i = 0; i < nums1.size(); i++)
    {
        cout << nums1[i] << " ";
    }
}