// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;

// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution
// {
// public:
//     ListNode *merge(ListNode *head1, ListNode *head2)
//     {
//         ListNode *t1 = head1;
//         ListNode *t2 = head2;
//         ListNode *dummyNode = new ListNode(-1);
//         ListNode *temp = dummyNode;

//         while (t1 != nullptr && t2 != nullptr)
//         {
//             if (t1->val <= t2->val)
//             {
//                 temp->next = t1;
//                 temp = temp->next;
//                 t1 = t1->next;
//             }
//             else
//             {
//                 temp->next = t2;
//                 temp = temp->next;
//                 t2 = t2->next;
//             }
//         }

//         while (t1 != nullptr)
//         {
//             temp->next = t1;
//             temp = temp->next;
//             t1 = t1->next;
//         }

//         while (t2 != nullptr)
//         {
//             temp->next = t2;
//             temp = temp->next;
//             t2 = t2->next;
//         }

//         return dummyNode->next;
//     }

//     ListNode *mergeKLists(vector<ListNode *> &lists)
//     {
//         if (lists.empty())
//         {
//             return nullptr;
//         }
//         ListNode *head = lists[0];
//         for (int i = 1; i < lists.size(); i++)
//         {
//             ListNode *temp = lists[i];
//             head = merge(head, temp);
//         }
//         return head;
//     }
// };

// TC - (n1 + n2) + (n1 + n2 + n3) + (n1 + n2 + n3 + n4)
//  assuming that lengths of all the k lists is n (max of n1,n2,n3,n4)
//  take this 2n + 3n + 4n + ...
//  now since there are k lists so we can write this as n + 2n + 3n + 4n + ... + kn
//  n(1+2+3+..+k)
//  n * { (k * ( k + 1)) / 2 }

// for space we are just changing the links.. SC is O(1)