#include <bits/stdc++.h>
#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        if (head == NULL)
        {
            return head;
        }
        if (head->next == NULL)
        {
            head->next = nullptr;
            delete head;
            return nullptr;
        }
        ListNode *temp = head;
        ListNode *prev = nullptr;
        int count = 1;
        while (temp)
        {
            prev = temp;
            temp = temp->next;
            count = count + 1;
            if (count == n)
            {
                prev->next = prev->next->next;
                delete temp;
                return head;
            }
        }
        return head;
    }
};
