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
bool isPalindrome(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return true;
    }
    Node *slow = head;
    Node *fast = head;
    // even and odd
    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    if (fast->next == NULL)
    {
        Node *middle = slow;
        Node *newHead = reverseLL(middle->next);
        Node *temp = head;
        while (temp != middle)
        {
            if (temp->data == newHead->data)
            {
                temp = temp->next;
                newHead = newHead->next;
            }
            else
            {
                return false;
            }
        }
        return true;
    }

    // even
    else if (fast->next->next == NULL)
    {
        Node *middle = slow;
        Node *newHead = reverseLL(middle->next);
        Node *temp = head;
        while (temp != middle->next)
        {
            if (temp->data == newHead->data)
            {
                temp = temp->next;
                newHead = newHead->next;
            }
            else
            {
                return false;
            }
        }
        return true;
    }

    // odd

    return false;
}

int main()
{
    vector<int> arr = {1, 2, 3, 2, 1};
    Node *head = ConvertArrToLL(arr);
    bool ans = isPalindrome(head);
    cout << ans;
}
