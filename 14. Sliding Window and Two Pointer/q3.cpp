#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    int totalFruit(vector<int> &fruits)
    {
        unordered_map<int, int> mpp;
        int n = fruits.size();
        int left = 0;
        int right = 0;
        int max_length = 0;
        while (right < n)
        {

            // fruit not in basket
            if (mpp.find(fruits[right]) == mpp.end())
            {
                // fruit not in basket and space in basket
                if (mpp.size() < 2)
                {
                    mpp[fruits[right]]++;
                }
                // fruit not in basket and no space either
                else
                {
                    while (mpp.size() == 2)
                    {
                        mpp[fruits[left]]--;
                        if (mpp[fruits[left]] == 0)
                            mpp.erase(fruits[left]);
                        left++;
                    }
                    mpp[fruits[right]]++;
                }
            }
            // fruit in the basket
            else
            {
                mpp[fruits[right]]++;
            }

            max_length = max(right - left + 1, max_length);
            right++;
        }
        return max_length;
    }
};