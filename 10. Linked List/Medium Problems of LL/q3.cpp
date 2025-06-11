#include <bits/stdc++.h>
#include <iostream>
#include <map>
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

bool hasCycle(Node *head)
{
    Node *temp = head;
    map<Node *, int> mpp;
    while (temp != NULL)
    {
        if (mpp.find(temp) != mpp.end())
        {
            return true;
        }
        mpp[temp] = 1;
        temp = temp->next;
    }
    return false;
}

int main()
{
    vector<int> arr = {3, 2, 0, -4};
    Node *head = ConvertArrToLL(arr);
    bool ans = hasCycle(head);
    cout << ans;
}
