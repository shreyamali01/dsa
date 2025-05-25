#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int i = m - 1;
    int j = 0;
    nums1.resize(m);
    nums2.resize(n);
    while ((j < n) && (i >= 0))
    {
        if (nums1[i] > nums2[j])
        {
            swap(nums1[i], nums2[j]);
            i--;
            j++;
        }
        else
        {
            break;
        }
    }
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    int k = 0;
    while (k < nums2.size())
    {
        nums1.push_back(nums2[k]);
        k++;
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