#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class MinStack
{
public:
    stack<pair<int, int>> st;
    MinStack()
    {
    }

    void push(int val)
    {
        pair<int, int> temp;
        if (st.empty())
        {
            temp.first = val;
            temp.second = val;
        }
        else
        {
            temp.first = val;
            temp.second = min(val, st.top().second);
        }
        st.push(temp);
    }

    void pop()
    {
        st.pop();
    }

    int top()
    {
        return st.top().first;
    }

    int getMin()
    {
        return st.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */