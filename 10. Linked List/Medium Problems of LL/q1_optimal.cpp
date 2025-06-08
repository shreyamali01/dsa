#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// delete head of the doubly linked list
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
}

Node *middleNode(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    Node *head = new Node(arr[0]);
    head = convertArrToDLL(head, arr);
    head = middleNode(head);
    print(head);
}
