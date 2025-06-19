#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int countPrimes(int n)
{
    vector<int> prime_list(n + 1, 1);
    for (int i = 2; i * i < prime_list.size(); i++)
    {
        if (prime_list[i] == 1)
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime_list[j] = 0;
            }
        }
    }

    // TC till here is N log (log N)

    int cnt = 0;
    for (int i = 2; i <= n; i++)
    {
        if (prime_list[i] == 1)
        {
            cnt += 1;
        }
    }
    return cnt;
}

int main()
{
    int n = 10;
    cout << countPrimes(n);
}