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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *temp1 = l1;
        ListNode *temp2 = l2;
        ListNode *prev = nullptr;
        int cnt1 = 0;
        int cnt2 = 0;
        while (temp1 != NULL)
        {
            cnt1 += 1;
            temp1 = temp1->next;
        }
        while (temp2 != NULL)
        {
            cnt2 += 1;
            temp2 = temp2->next;
        }
        temp1 = l1;
        temp2 = l2;
        int carry = 0;
        if (cnt1 < cnt2)
        {
            return addTwoNumbers(l2, l1);
        }
        while (temp2 != NULL)
        {
            temp1->val = temp1->val + temp2->val + carry;
            if (temp1->val < 10)
            {
                carry = 0;
            }
            else
            {
                temp1->val = ((temp1->val) % 10);
                carry = 1;
            }
            prev = temp1;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        while (temp1 != NULL)
        {
            temp1->val = temp1->val + carry;
            if (temp1->val < 10)
            {
                carry = 0;
                break;
            }
            else
            {
                temp1->val = ((temp1->val) % 10);
                carry = 1;
            }
            prev = temp1;
            temp1 = temp1->next;
        }
        if (carry == 1)
        {
            ListNode *newVal = new ListNode(carry);
            prev->next = newVal;
            newVal->next = nullptr;
            return l1;
        }
        return l1;
    }
};
