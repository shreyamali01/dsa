#include <bits/stdc++.h>
#include <iostream>
#include <map>
using namespace std;

// Add 1 to LL

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

Node *reverseLL(Node *head)
{
    Node *temp = head;
    Node *prev = NULL;
    while (temp != NULL)
    {
        Node *front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }
    return prev;
}

int addHelper(Node *temp)
{
    if (temp == NULL)
    {
        return 1;
    }
    int carry = addHelper(temp->next);
    temp->data = temp->data + carry;
    if (temp->data < 10)
    {
        carry = 0;
    }
    else
    {
        temp->data = 0;
        carry = 1;
    }
    return carry;
}
Node *addOne(Node *head)
{
    Node *temp = head;
    int carry = addHelper(temp);
    if (carry == 1)
    {
        Node *newVal = new Node(1);
        newVal->next = head;
        return newVal;
    }
    return head;
}

int main()
{
    vector<int> arr1 = {9, 9, 9, 9};
    Node *list1 = ConvertArrToLL(arr1);
    Node *ans = addOne(list1);
    printLL(ans);
}
