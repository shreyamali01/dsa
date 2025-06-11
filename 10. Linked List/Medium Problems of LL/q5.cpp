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
    if (head == NULL || head->next == NULL)
    {
        return 0;
    }
    Node *temp = head;
    map<Node *, int> mpp;
    int cnt = 0;
    while (temp != NULL)
    {
        if (mpp.find(temp) != mpp.end())
        {
            return cnt - mpp[temp] + 1;
        }
        cnt = cnt + 1;
        mpp[temp] = cnt;
        temp = temp->next;
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
