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
    ListNode *findKthNode(ListNode *temp, int k)
    {
        ListNode *curr = temp;
        int cnt = 0;
        while (curr != NULL)
        {
            cnt += 1;
            if (cnt == k)
            {
                return curr;
            }
            curr = curr->next;
        }
        return NULL;
    }

    ListNode *reverseLL(ListNode *head)
    {
        ListNode *temp = head;
        ListNode *prev = nullptr;
        while (temp != NULL)
        {
            ListNode *front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        if (head == NULL || head->next == nullptr)
        {
            return head;
        }
        ListNode *temp = head;
        ListNode *prevNode = nullptr;
        while (temp != NULL)
        {
            ListNode *KthNode = findKthNode(temp, k);
            if (KthNode == NULL)
            {
                while (temp != NULL)
                {
                    prevNode->next = temp;
                    prevNode = prevNode->next;
                    temp = temp->next;
                }
                return head;
            }
            ListNode *nextNode = KthNode->next;
            KthNode->next = nullptr;
            ListNode *subHead = reverseLL(temp);
            if (temp == head)
            {
                head = KthNode;
            }
            else
            {
                prevNode->next = subHead;
            }
            prevNode = temp;
            temp = nextNode;
        }
        return head;
    }
};
