// Node *removeDuplicates(struct Node *head)
// {
//     Node *temp = head->next;
//     while (temp != NULL)
//     {
//         Node *back = temp->prev;
//         Node *front = temp->next;
//         if (temp->data == back->data)
//         {
//             if (back)
//             {
//                 back->next = front;
//             }
//             if (front)
//             {
//                 front->prev = back;
//             }
//             Node *curr = temp;
//             temp = front;
//             delete curr;
//         }
//         else
//         {
//             temp = temp->next;
//         }
//     }
//     return head;
// }

// TC - O(N) SC - O(1)