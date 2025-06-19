class Solution
{
public:
    double myPow(double x, int n)
    {
        double ans = 1;
        long long N = n;
        bool isNegative = false;
        if (N < 0)
        {
            isNegative = true;
            N = -1 * N;
        }
        while (N > 0)
        {
            if (N % 2 == 0)
            {
                N = N / 2;
                x = x * x;
            }
            else
            {
                N = N - 1;
                ans = ans * x;
            }
        }
        if (isNegative)
        {
            ans = 1 / ans;
        }
        return ans;
    }
};