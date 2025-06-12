#include <bits/stdc++.h>
#include <iostream>
#include <map>
using namespace std;

// length of the loop

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

int countNodesinLoop(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            int count = 1;
            Node *temp = fast;
            slow = slow->next;
            while (slow != fast)
            {
                count = count + 1;
                slow = slow->next;
            }
            return count;
        }
    }
    return 0;
}

int main()
{
    vector<int> arr = {3, 2, 0, -4};
    Node *head = ConvertArrToLL(arr);
    int ans = countNodesinLoop(head);
    cout << ans;
}
