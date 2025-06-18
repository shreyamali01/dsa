#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void print_divisors(int n)
{
    vector<int> ans;
    for (int i = 1; i * i <= n; i++)
    {
        if ((n % i) == 0)
        {
            ans.push_back(i);
            if ((n / i) != i)
            {
                ans.push_back(n / i);
            }
        }
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

int main()
{
    int n = 20;
    print_divisors(n);
}