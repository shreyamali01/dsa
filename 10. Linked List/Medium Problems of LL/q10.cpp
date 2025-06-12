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
Node *mergeTwoLists(Node *list1, Node *list2)
{

    if (list1 == NULL && list2 == NULL)
    {
        return list1;
    }
    else if (list1 == NULL && list2 != NULL)
    {
        return list2;
    }
    else if (list1 != NULL && list2 == NULL)
    {
        return list1;
    }
    Node *newHead;
    if (list1->data <= list2->data)
    {
        newHead = list1;
        list1 = list1->next;
    }
    else
    {
        newHead = list2;
        list2 = list2->next;
    }

    Node *temp = newHead;

    while (list1 != NULL && list2 != NULL)
    {
        if (list1->data <= list2->data)
        {
            temp->next = list1;
            temp = temp->next;
            list1 = list1->next;
        }
        else
        {
            temp->next = list2;
            temp = temp->next;
            list2 = list2->next;
        }
    }

    while (list1 != NULL)
    {
        temp->next = list1;
        temp = temp->next;
        list1 = list1->next;
    }

    while (list2 != NULL)
    {
        temp->next = list2;
        temp = temp->next;
        list2 = list2->next;
    }

    return newHead;
}

int main()
{
    vector<int> arr1 = {1, 2, 4};
    vector<int> arr2 = {1, 2, 3, 4};
    Node *list1 = ConvertArrToLL(arr1);
    Node *list2 = ConvertArrToLL(arr2);
    Node *ans = mergeTwoLists(list1, list2);
    printLL(ans);
}
