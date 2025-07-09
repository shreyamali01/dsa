#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    int characterReplacement(string s, int k)
    {
        int left = 0;
        int right = 0;
        int n = s.size();
        int changes = 0;
        int max_freq = 0;
        int max_length = 0;
        int freq[26] = {0};
        while (right < n)
        {
            freq[s[right] - 'A']++;
            max_freq = max(max_freq, freq[s[right] - 'A']);
            changes = (right - left + 1) - max_freq;
            if (changes <= k)
            {
                max_length = max(max_length, right - left + 1);
            }
            else
            {
                while ((right - left + 1) - max_freq > k)
                {
                    freq[s[left] - 'A']--;
                    max_freq = 0;
                    for (int i = 0; i < 26; i++)
                    {
                        max_freq = max(freq[i], max_freq);
                    }
                    left = left + 1;
                }
            }
            right = right + 1;
        }
        return max_length;
    }
};