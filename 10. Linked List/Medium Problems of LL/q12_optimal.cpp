#include <bits/stdc++.h>
#include <iostream>
#include <map>
using namespace std;

// sort 0's, 1's and 2's - naive approach will be to sort the entire linkedlist

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

Node *segregate(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *zeroHead = new Node(-1);
    Node *oneHead = new Node(-1);
    Node *twoHead = new Node(-1);

    Node *zeroHeadCopy = zeroHead;
    Node *oneHeadCopy = oneHead;
    Node *twoHeadCopy = twoHead;

    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == 0)
        {
            zeroHead->next = temp;
            zeroHead = zeroHead->next;
            temp = temp->next;
        }
        else if (temp->data == 1)
        {
            oneHead->next = temp;
            oneHead = oneHead->next;
            temp = temp->next;
        }
        else
        {
            twoHead->next = temp;
            twoHead = twoHead->next;
            temp = temp->next;
        }
    }
    twoHead->next = NULL;

    if (oneHeadCopy->next != NULL)
    {
        zeroHead->next = oneHeadCopy->next;
    }
    else
    {
        zeroHead->next = twoHeadCopy->next;
    }
    oneHead->next = twoHeadCopy->next;
    Node *ans = zeroHeadCopy->next;

    delete zeroHeadCopy;
    delete oneHeadCopy;
    delete twoHeadCopy;

    return ans;
}

int main()
{
    vector<int> arr1 = {1, 2, 2, 1, 2, 0, 2, 2};
    Node *list1 = ConvertArrToLL(arr1);
    Node *ans = segregate(list1);
    printLL(ans);
}
