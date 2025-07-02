#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    int largestRectangleArea(vector<int> &heights)
    {
        stack<int> st;
        int n = heights.size();
        int max_area = 0;
        int nse;
        int pse;
        int ele;
        for (int i = 0; i < n; i++)
        {
            while (!st.empty() && heights[st.top()] > heights[i])
            {
                ele = st.top();
                st.pop();
                nse = i;
                pse;
                if (st.empty())
                {
                    pse = -1;
                }
                else
                {
                    pse = st.top();
                }
                max_area = max(heights[ele] * (nse - pse - 1), max_area);
            }
            st.push(i);
        }

        while (!st.empty())
        {
            nse = n;
            ele = st.top();
            st.pop();
            if (!st.empty())
            {
                pse = st.top();
            }
            else
            {
                pse = -1;
            }
            max_area = max(heights[ele] * (nse - pse - 1), max_area);
        }

        return max_area;
    }
};
