#include <bits/stdc++.h>
#include <iostream>
#include <map>
using namespace std;

// getIntersection Node

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

Node *getIntersectionNode(Node *headA, Node *headB)
{
    Node *tempA = headA;
    Node *tempB = headB;
    map<Node *, int> mpp;
    // traversing through first list
    while (tempA != NULL)
    {
        mpp[tempA] = 1;
        tempA = tempA->next;
    }
    // traversing through second list and finding intersection
    while (tempB != 0)
    {
        if (mpp.find(tempB) != mpp.end())
        {
            return tempB;
        }
        tempB = tempB->next;
    }
    return NULL;
}

int main()
{
    // Shared part
    Node *common = new Node(8);
    common->next = new Node(4);
    common->next->next = new Node(5);

    // First list: 4 -> 1 -> [8 -> 4 -> 5]
    Node *list1 = new Node(4);
    list1->next = new Node(1);
    list1->next->next = common;

    // Second list: 5 -> 6 -> 1 -> [8 -> 4 -> 5]
    Node *list2 = new Node(5);
    list2->next = new Node(6);
    list2->next->next = new Node(1);
    list2->next->next->next = common;

    Node *ans = getIntersectionNode(list1, list2);
    if (ans)
        cout << "Intersection at node with data: " << ans->data << endl;
    else
        cout << "No intersection\n";

    return 0;
}
