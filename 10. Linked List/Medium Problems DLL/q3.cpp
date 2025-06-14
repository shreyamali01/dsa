Node *removeDuplicates(struct Node *head)
{
    Node *temp = head;
    unordered_map<int, int> mpp;
    while (temp != NULL)
    {
        if (mpp.find(temp->data) != mpp.end())
        {
            Node *back = temp->prev;
            Node *front = temp->next;
            if (back)
            {
                back->next = front;
            }
            if (front)
            {
                front->prev = back;
            }
            Node *curr = temp;
            temp = front;
            delete curr;
        }
        else
        {
            mpp[temp->data] = 1;
            temp = temp->next;
        }
    }
    return head;
}
