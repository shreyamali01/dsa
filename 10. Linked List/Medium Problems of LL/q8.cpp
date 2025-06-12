#include <bits/stdc++.h>
#include <iostream>
#include <map>
using namespace std;

// check palindrome

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

Node *removeNthFromEnd(Node *head, int n)
{
    if (head == NULL)
    {
        return head;
    }
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count = count + 1;
        temp = temp->next;
    }
    int k = count - n + 1;
    Node *prev = NULL;
    temp = head;
    int count_k = 0;
    if (k == 1)
    {
        Node *newHead = head->next;
        delete head;
        return newHead;
    }
    while (temp != NULL)
    {
        count_k += 1;
        if (count_k == k)
        {
            prev->next = prev->next->next;
            delete temp;
            return head;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = ConvertArrToLL(arr);
    int n = 2;
    Node *ans = removeNthFromEnd(head, n);
    printLL(ans);
}
