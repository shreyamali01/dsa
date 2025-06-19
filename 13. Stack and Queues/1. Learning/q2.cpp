#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Queue
{
    int size;
    int top;
    int *arr;
    int front;
    int rear;
    int max_size;

public:
    Queue()
    {
        front = 0;
        rear = 0;
        max_size = 1000;
        arr = new int[max_size];
    }

    Queue(int x)
    {
        front = 0;
        rear = 0;
        max_size = x;
        arr = new int[max_size];
    }

    void Push(int a)
    {
        if (rear == max_size)
        {
            cout << "overflow";
            return;
        }
        arr[rear] = a;
        rear = rear + 1;
    }

    int Pop()
    {
        // if empty
        if (front == rear)
        {
            return -1;
        }
        int b = arr[front];
        front = front + 1;
        return b;
    }

    int Top()
    {
        // if empty
        if (front == rear)
        {
            return -1;
        }
        return arr[front];
    }

    int Size()
    {
        return rear - front;
    }
};

int main()
{
    Queue q(6);
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