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
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == nullptr)
    {
        return head;
    }
    int cnt = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        cnt = cnt + 1;
        temp = temp->next;
    }
    int tar = cnt / 2;
    int cnt2 = 0;
    temp = head;
    while (temp != NULL)
    {
        cnt2 = cnt2 + 1;
        if (cnt2 == tar)
        {
            temp = temp->next;
            return temp;
        }
        temp = temp->next;
    }
    return head;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    Node *head = new Node(arr[0]);
    head = convertArrToDLL(head, arr);
    head = middleNode(head);
    print(head);
}
