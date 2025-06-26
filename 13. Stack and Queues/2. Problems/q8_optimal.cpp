#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    int largestRectangleArea(vector<int> &heights)
    {
        int n = heights.size();
        // storing previous smallest of all the elements
        vector<int> prefixMin(n, 0);
        stack<int> st;
        for (int i = 0; i < n; i++)
        {
            while (!st.empty() && heights[i] <= heights[st.top()])
            {
                st.pop();
            }
            if (st.empty())
            {
                prefixMin[i] = -1;
            }
            else
            {
                prefixMin[i] = st.top();
            }
            st.push(i);
        }

        while (!st.empty())
        {
            st.pop();
        }

        // storing next smallest
        vector<int> suffixMin(n, 0);
        for (int i = n - 1; i >= 0; i--)
        {
            while (!st.empty() && heights[i] <= heights[st.top()])
            {
                st.pop();
            }
            if (st.empty())
            {
                suffixMin[i] = n;
            }
            else
            {
                suffixMin[i] = st.top();
            }
            st.push(i);
        }

        int max_area = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int pse = prefixMin[i];
            int nse = suffixMin[i];
            int area = (heights[i]) * (nse - pse - 1);
            max_area = max(max_area, area);
        }
        return max_area;
    }
};