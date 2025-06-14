// /*
// // Definition for a Node.
// class Node {
// public:
//     int val;
//     Node* next;
//     Node* random;

//     Node(int _val) {
//         val = _val;
//         next = NULL;
//         random = NULL;
//     }
// };
// */

// class Solution
// {
// public:
//     Node *copyRandomList(Node *head)
//     {
//         Node *temp = head;
//         while (temp != NULL)
//         {
//             Node *copyNode = new Node(temp->val);
//             copyNode->next = temp->next;
//             temp->next = copyNode;
//             temp = temp->next->next;
//         }
//         temp = head;
//         while (temp != NULL)
//         {
//             Node *cNode = temp->next;
//             if (temp->random != NULL)
//             {
//                 cNode->random = temp->random->next;
//             }
//             else
//             {
//                 cNode->random = nullptr;
//             }
//             temp = temp->next->next;
//         }
//         temp = head;
//         Node *dummy = new Node(-1);
//         Node *curr = dummy;
//         while (temp != NULL)
//         {
//             curr->next = temp->next;
//             curr = curr->next;
//             temp->next = temp->next->next;
//             temp = temp->next;
//         }
//         return dummy->next;
//     }
// };
