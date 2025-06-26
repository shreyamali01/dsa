#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    int nextSmallestElement(vector<int> &heights, int index)
    {
        int n = heights.size();
        for (int i = index + 1; i < heights.size(); i++)
        {
            if (heights[i] < heights[index])
            {
                return i;
            }
        }
        return n;
    }

    int preSmallestElement(vector<int> &heights, int index)
    {
        for (int i = index - 1; i >= 0; i--)
        {
            if (heights[i] < heights[index])
            {
                return i;
            }
        }
        return -1;
    }

    int largestRectangleArea(vector<int> &heights)
    {
        int n = heights.size();
        int max_area = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int pse = preSmallestElement(heights, i);
            int nse = nextSmallestElement(heights, i);
            int area = (heights[i]) * (nse - pse - 1);
            max_area = max(max_area, area);
        }
        return max_area;
    }
};
