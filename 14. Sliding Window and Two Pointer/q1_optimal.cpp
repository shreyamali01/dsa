#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_map<char, int> mpp;
        int left = 0;
        int right = 0;
        int n = s.size();
        int max_len = 0;
        while (right < n)
        {
            // the character is in the map
            if (mpp.find(s[right]) != mpp.end())
            {
                if (mpp[s[right]] >= left)
                {
                    left = mpp[s[right]] + 1;
                }
            }
            max_len = max(right - left + 1, max_len);
            mpp[s[right]] = right;
            right = right + 1;
        }
        return max_len;
    }
};