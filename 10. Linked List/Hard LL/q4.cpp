/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution
{
public:
    Node *copyRandomList(Node *head)
    {
        Node *temp = head;
        unordered_map<Node *, Node *> mpp;
        while (temp != NULL)
        {
            Node *CopyNode = new Node(temp->val);
            mpp[temp] = CopyNode;
            temp = temp->next;
        }
        temp = head;
        while (temp != NULL)
        {
            Node *newNode = mpp[temp];
            newNode->next = mpp[temp->next];
            newNode->random = mpp[temp->random];
            temp = temp->next;
        }
        return mpp[head];
    }
};