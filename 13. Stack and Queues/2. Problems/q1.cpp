#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> ans;
        for (int i = 0; i < nums1.size(); i++)
        {
            stack<int> st;
            int n = nums2.size();
            for (int j = n - 1; j >= 0; j--)
            {
                st.push(nums2[j]);
            }
            while (!st.empty() && st.top() != nums1[i])
            {
                st.pop();
            }
            if (!st.empty())
            {
                st.pop();
            }
            while (!st.empty() && st.top() < nums1[i])
            {
                st.pop();
            }
            if (st.empty())
            {
                ans.push_back(-1);
            }
            else
            {
                ans.push_back(st.top());
            }
        }
        return ans;
    }
};