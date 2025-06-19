#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

class Stack
{
    Node *top;
    int size;

public:
    Stack()
    {
        size = 0;
        Node *top;
        top->next = nullptr;
    }

    void Push(int x)
    {
        Node *temp = new Node(x);
        temp->next = top;
        top = temp;
        size += 1;
    }

    int Pop()
    {
        Node *temp = top;
        top = top->next;
        size -= 1;
        return temp->data;
    }

    int Top()
    {
        return top->data;
    }

    int Size()
    {
        return size;
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