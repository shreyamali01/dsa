#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Stack
{
public:
    int size;
    int top;
    int *arr;

public:
    Stack()
    {
        top = -1;
        size = 1000;
        arr = new int[size];
    }
    void Push(int x)
    {
        top = top + 1;
        arr[top] = x;
    }
    int Pop()
    {
        if (top == -1)
        {
            return -1;
        }
        int y = arr[top];
        top = top - 1;
        return y;
    }
    int Top()
    {
        int y = arr[top];
        return y;
    }
    int Size()
    {
        return top + 1;
    }
};

int main()
{
    Stack s;
    s.Push(6);
    s.Push(7);
    s.Push(8);
    cout << "Top of stack is before deleting any element " << s.Top() << endl;
    cout << "Size of stack before deleting any element " << s.Size() << endl;
    cout << "The element deleted is " << s.Pop() << endl;
    cout << "Size of stack after deleting an element " << s.Size() << endl;
    cout << "Top of stack after deleting an element " << s.Top() << endl;
    return 0;
}
