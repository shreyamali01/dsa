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

    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->back;
    }
}

Node *reverseDLL(Node *head)
{
    Node *temp = head;
    stack<int> st;
    while (temp)
    {
        st.push(temp->data);
        temp = temp->next;
    }

    temp = head;

    while (temp)
    {
        temp->data = st.top();
        st.pop();
        temp = temp->next;
    }

    return head;
}

int main()
{
    vector<int> arr = {1, 2, 3, 45, 4564};
    Node *head = new Node(arr[0]);
    head = convertArrToDLL(head, arr);
    head = reverseDLL(head);
    print(head);
}
