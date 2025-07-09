#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    int characterReplacement(string s, int k)
    {
        int max_length = 0;
        int max_freq = 0;
        int n = s.size();
        int changes = 0;
        for (int i = 0; i < n; i++)
        {
            int freq[26] = {0};
            max_freq = 0;
            for (int j = i; j < n; j++)
            {
                freq[s[j] - 'A']++;
                max_freq = max(max_freq, freq[s[j] - 'A']);
                changes = (j - i + 1) - max_freq;
                if (changes <= k)
                {
                    max_length = max(max_length, j - i + 1);
                }
                else
                {
                    break;
                }
            }
        }
        return max_length;
    }
};