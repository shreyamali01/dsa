#include <bits/stdc++.h>
#include <iostream>
using namespace std;

string decimalToBinary(int n)
{
    string ans = " ";
    while (n != 0)
    {
        if (n % 2 == 0)
        {
            ans += '0';
        }
        else
        {
            ans += '1';
        }
        n = n / 2;
    }
    string rev_ans = " ";
    for (int i = ans.size() - 1; i >= 0; i--)
    {
        rev_ans += ans[i];
    }
    return rev_ans;
}

int main()
{
    int n = 3;
    cout << decimalToBinary(n);
}
