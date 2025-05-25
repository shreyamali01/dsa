#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int j = 0;
    nums1.resize(m);
    nums2.resize(n);
    for (int i = 0; i < nums1.size(); i++)
    {

        if ((j < n) && (nums1[i] >= nums2[j]))
        {
            nums1.insert(nums1.begin() + i, nums2[j]);
            j++;
        }
    }
    while (j < n)
    {
        nums1.push_back(nums2[j]);
        j++;
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