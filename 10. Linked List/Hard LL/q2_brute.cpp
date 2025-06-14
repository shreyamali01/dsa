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
    ListNode *rotateOnce(ListNode *head)
    {

        ListNode *temp = head;
        while (temp != NULL)
        {
            if (temp->next->next == NULL)
            {
                ListNode *last = temp->next;
                temp->next = nullptr;
                last->next = head;
                return last;
            }
            else
            {
                temp = temp->next;
            }
        }
        return NULL;
    }
    ListNode *rotateRight(ListNode *head, int k)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }
        ListNode *curr = head;
        ListNode *ans = head;
        ;
        int len = 0;
        while (curr != NULL)
        {
            len += 1;
            curr = curr->next;
        }
        curr = head;
        int new_k = (k % (len));
        for (int i = 0; i < new_k; i++)
        {
            ans = rotateOnce(curr);
            curr = ans;
        }
        return ans;
    }
};