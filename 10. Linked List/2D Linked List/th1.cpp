#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// doubly linked list
class Node
{
public:
    int data;
    Node *next;
    Node *back;

    Node(int data1, Node *back1, Node *next1)
    {
        data = data1;
        next = next1;
        back = back1;
    }

    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

int main()
{
    Node *x = new Node(3);
    cout << x->next;
}