#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    bool isPrime(int n)
    {
        int cnt = 0;
        for (int i = 1; i * i <= n; i++)
        {
            if (n <= 1)
                return false;
            if ((n % i) == 0)
            {
                cnt += 1;
                if ((n / i) != i)
                {
                    cnt += 1;
                }
            }
            if (cnt > 2)
            {
                return false;
            }
        }
        if (cnt == 2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int largestPrimeFactor(int n)
    {
        vector<int> ans;
        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                if (isPrime(i))
                {
                    ans.push_back(i);
                }
                if ((n / i) != i)
                {
                    if (isPrime(n / i))
                    {
                        ans.push_back(n / i);
                    }
                }
            }
        }
        int max_ans = INT_MIN;
        for (int i = 0; i < ans.size(); i++)
        {
            if (ans[i] > max_ans)
            {
                max_ans = ans[i];
            }
        }
        return max_ans;
    }
};