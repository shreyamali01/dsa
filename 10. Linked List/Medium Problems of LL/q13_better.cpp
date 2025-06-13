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
    int cntA = 0;
    int cntB = 0;
    // calculating length of ListA
    while (tempA != NULL)
    {
        cntA += 1;
        tempA = tempA->next;
    }
    // calculating length of ListB
    while (tempB != NULL)
    {
        cntB += 1;
        tempB = tempB->next;
    }
    tempA = headA;
    tempB = headB;
    // cntA is less than or equal to cntB
    if (cntA <= cntB)
    {
        int diff = cntB - cntA;
        for (int i = 0; i < diff; i++)
        {
            tempB = tempB->next;
        }
    }
    else
    {
        int diff = cntA - cntB;
        for (int i = 0; i < diff; i++)
        {
            tempA = tempA->next;
        }
    }

    while (tempA != NULL)
    {
        if (tempA == tempB)
        {
            return tempA;
        }
        tempA = tempA->next;
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
