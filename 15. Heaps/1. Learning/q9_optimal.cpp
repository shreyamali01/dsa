// // #include <bits/stdc++.h>
// // #include <iostream>
// // using namespace std;

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
//     ListNode *mergeKLists(vector<ListNode *> &lists)
//     {
//         priority_queue<pair<int, ListNode *>, vector<pair<int, ListNode *>>, greater<pair<int, ListNode *>>> minHeap;

//         for (int i = 0; i < lists.size(); i++)
//         {
//             if (lists[i])
//             {
//                 minHeap.push({lists[i]->val, lists[i]});
//             }
//         }

//         ListNode *dummyNode = new ListNode(-1);
//         ListNode *temp = dummyNode;
//         while (!minHeap.empty())
//         {
//             temp->next = minHeap.top().second;
//             temp = temp->next;
//             if (minHeap.top().second->next != nullptr)
//             {
//                 minHeap.push({minHeap.top().second->next->val, minHeap.top().second->next});
//             }
//             minHeap.pop();
//         }
//         return dummyNode->next;
//     }
// };