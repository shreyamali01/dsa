#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// delete nodes in DLL
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

void deleteAllOccurOfX(struct Node *head_ref, int x)
{

    Node *head = head_ref;
    Node *temp = head;
    Node *back = nullptr;
    Node *front = nullptr;
    while (temp != NULL)
    {
        if (temp->data == x)
        {
            if (temp == head)
            {
                head = head->next;
                temp = head;
            }
            else
            {
                back = temp->prev;
                front = temp->next;
                if (back)
                {
                    back->next = front;
                }
                if (front)
                {
                    front->prev = back;
                }
                Node *curr = temp;
                temp = front;
                delete curr;
            }
        }
        else
        {
            temp = temp->next;
        }
    }
    *head_ref = head;
}

int main()
{
    vector<int> arr = {};
    if (arr.empty())
    {
        return 0;
    }
    Node *head = new Node(arr[0]);
    head = convertArrToDLL(head, arr);
    head = deleteAllOccurOfX(head);
    print(head);
}
