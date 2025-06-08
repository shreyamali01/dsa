#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// convert array to DLL
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

Node *convertArrToDLL(Node *head, vector<int> arr)
{
    Node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *val = new Node(arr[i]);
        val->back = prev;
        prev->next = val;
        prev = prev->next;
    }
    return head;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->back;
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    Node *head = new Node(arr[0]);
    head = convertArrToDLL(head, arr);
    print(head);
}