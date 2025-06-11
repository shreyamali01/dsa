#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// reverse the linked list recurssively

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

Node *reverseRec(Node *head)
{
    if (head->next == nullptr)
    {
        return head;
    }
    Node *temphead = reverseRec(head->next);
    Node *ans = temphead;
    Node *current = head;
    while (temphead->next != nullptr)
    {
        temphead = temphead->next;
    }
    temphead->next = current;
    current->next = nullptr;
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 45, 676};
    Node *head = ConvertArrToLL(arr);
    head = reverseRec(head);
    printLL(head);
}
