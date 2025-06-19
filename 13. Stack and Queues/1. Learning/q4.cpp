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

class Queue
{
public:
    Node *front;
    Node *rear;
    int size;

    Queue()
    {
        front = rear = nullptr;
        size = 0;
    }

    void Push(int x)
    {
        Node *temp = new Node(x);
        if (front == nullptr)
        {
            front = temp;
            rear = temp;
        }
        else
        {
            rear->next = temp;
            rear = rear->next;
        }
        size += 1;
    }

    int Pop()
    {
        if (front == nullptr)
        {
            return -1;
        }
        Node *temp = front;
        front = front->next;
        temp->next = nullptr;
        size -= 1;
        return temp->data;
    }

    int Top()
    {
        if (front == nullptr)
        {
            return -1;
        }
        return front->data;
    }

    int Size()
    {
        return size;
    }
};

int main()
{
    Queue q;
    q.Push(4);
    q.Push(14);
    q.Push(24);
    q.Push(34);
    cout << "The peek of the queue before deleting any element " << q.Top() << endl;
    cout << "The size of the queue before deletion " << q.Size() << endl;
    cout << "The first element to be deleted " << q.Pop() << endl;
    cout << "The peek of the queue after deleting an element " << q.Top() << endl;
    cout << "The size of the queue after deleting an element " << q.Size() << endl;

    return 0;
}