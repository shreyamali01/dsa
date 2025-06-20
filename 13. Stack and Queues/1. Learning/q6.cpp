#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class MyQueue
{
public:
    stack<int> st1;
    stack<int> st2;
    MyQueue()
    {
    }

    void push(int x)
    {
        int n = st1.size();
        for (int i = 1; i <= n; i++)
        {
            st2.push(st1.top());
            st1.pop();
        }
        st1.push(x);
        int m = st2.size();
        while (!st2.empty())
        {
            st1.push(st2.top());
            st2.pop();
        }
    }

    int pop()
    {
        int a = st1.top();
        st1.pop();
        return a;
    }

    int peek()
    {
        return st1.top();
    }

    bool empty()
    {
        return !(st1.size());
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */