#include <bits/stdc++.h>
#include <iostream>
using namespace std;

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

Node *convertArrtoLL(vector<int> &arr)
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

int main()
{
    vector<int> arr = {2, 5, 7, 9};
    int count = 0;
    Node *head = convertArrtoLL(arr);
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        count = count + 1;
        temp = temp->next;
    }
    cout << endl;
    cout << "ans is " << count;
    return count;
}
