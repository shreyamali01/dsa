/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *rotateRight(ListNode *head, int k)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }
        ListNode *temp = head;
        int cnt = 0;
        ListNode *last = head;
        while (temp != NULL)
        {
            cnt += 1;
            last = temp;
            temp = temp->next;
        }
        int new_k = (k % cnt);
        int end = cnt - new_k;
        cnt = 0;
        temp = head;
        while (temp != NULL)
        {
            cnt += 1;
            if (cnt == end)
            {
                last->next = head;
                head = temp->next;
                temp->next = nullptr;
                return head;
            }
            temp = temp->next;
        }
        return NULL;
    }
};