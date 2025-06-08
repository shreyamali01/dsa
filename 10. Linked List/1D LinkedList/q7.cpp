#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// insert a node at the kth position in the linked list
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

Node *ConvertArrToLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void printLL(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

Node *insertElAtKthPosition(Node *head, int el, int x)
{
    Node *ins = new Node(el);
    if (head == NULL)
    {
        return ins;
    }

    Node *temp = head;
    if (x == 1)
    {
        ins->next = head;
        return ins;
    }
    int cnt = 1;
    while (temp)
    {
        cnt = cnt + 1;
        Node *prev = temp;
        temp = temp->next;
        if (x == cnt)
        {
            prev->next = ins;
            ins->next = temp;
            return head;
        }
    }
    return head;
}

int main()
{
    vector<int> arr = {1};
    Node *head = ConvertArrToLL(arr);
    int x = 2;
    int el = 8;
    head = insertElAtKthPosition(head, el, x);
    printLL(head);
}
