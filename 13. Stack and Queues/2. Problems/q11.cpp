#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class StockSpanner
{
private:
    stack<pair<int, int>> st;
    int idx;

public:
    StockSpanner()
    {
        idx = -1;
    }

    int next(int price)
    {
        idx = idx + 1;
        int span;
        while (!st.empty() && st.top().second <= price)
        {
            st.pop();
        }
        if (st.empty())
        {
            span = idx + 1;
        }
        else
        {
            span = idx - st.top().first;
        }
        st.push({idx, price});
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */